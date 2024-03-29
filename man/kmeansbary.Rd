% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/kmeansbary.R
\name{kmeansbary}
\alias{kmeansbary}
\title{Compute Pseudo-Barycenter of a List of Point Patterns}
\usage{
kmeansbary(
  zeta,
  pplist,
  penalty,
  add_del = Inf,
  surplus = 0,
  N = 200L,
  eps = 0.005,
  exact = FALSE,
  verbose = 0
)
}
\arguments{
\item{zeta}{a point pattern. Object of class \code{ppp} or a list with components \code{x} and \code{y}.}

\item{pplist}{a list of point patterns. Object of class \code{ppplist} or any list where each elements
has components  \code{x} and \code{y}.}

\item{penalty}{the penalty for adding/deleting points when computing TT-2 distances.}

\item{add_del}{for how many iterations shall the algorithm add points to / delete points from zeta
if this is favorable? Defaults to Inf.}

\item{surplus}{by how many points is the barycenter point pattern allowed to be larger than
the largest input point pattern (among pplist and zeta) if add_del > 0.
A larger number increases the computational load.}

\item{N}{the maximum number of iterations.}

\item{eps}{the algorithm stops if the relative improvement of the objective function between two
iterations is less than eps.}

\item{exact}{logical. Shall the barycenter of a cluster be calculated exactly by Algorithm 1
of Drezner, Mehrez and Wesolowsky (1991)? In our experience setting \code{exact=TRUE}
yields no systematic improvement of the overall objective function value, while the
computation times are substantially larger.}

\item{verbose}{the verbosity level. One of 0, 1, 2, 3, where 0 means silent and 3 means full details.}
}
\value{
A list with components:
        \item{cost}{the sum of squared TT-2 distances between the computed pseudo-barycenter and the point patterns.}
        \item{barycenter}{the pseudo-barycenter as a \code{ppp}-object.}
        \item{iterations}{the number of iterations required until convergence.}
}
\description{
Starting from an initial candidate point pattern \code{zeta}, use a k-means-like
algorithm to compute a local minimum in the barycenter problem based on the TT-2 metric
for a list \code{pplist} of planar point patterns.
}
\details{
Given \eqn{k} planar point patterns \eqn{\xi_1, \ldots, \xi_k}{xi_1, ..., xi_k} (stored in
          \code{pplist}), this function finds a local minimizer \eqn{\zeta^*}{zeta*} of
          \deqn{\sum_{j=1}^k \tau_2(\xi_j, \zeta)^2,}{sum_{j=1}^k tau_2(xi_j, zeta)^2,}
          where \eqn{\tau_2}{tau_2} denotes the TT-2 metric based on the Euclidean metric between points.
          
          Starting from an initial candidate point pattern \code{zeta}, the algorithm alternates
          between assigning a point from each pattern \eqn{\xi_j}{xi_j} to each point of the candidate
          and computing new candidate patterns by shifting, adding and deleting points.
          A detailed description of the algorithm is given in Müller, Schuhmacher and Mateu (2020).
          
          For first-time users it is recommended to keep the default values and set \code{penalty}
          to a noticeable fraction of the diameter of the observation window, e.g. between
          0.1 and 0.25 times this diameter.
}
\examples{
data(pplist_samecard)
plot(superimpose(pplist_samecard), cex=0.7, legend=FALSE,
     xlim=c(-0.2,1.2), ylim=c(-0.1,1.1), main="", use.marks=FALSE) #plotting the data

set.seed(12345)
zeta <- ppp(runif(100), runif(100))
plot(zeta, add=TRUE, col="beige", lwd=2, pch=16) #plotting the start-zeta over the data

res <- kmeansbary(zeta, pplist_samecard, penalty=0.1, add_del=Inf)
plot(res$barycenter, add=TRUE, col="blue", pch=16) #adding the computed barycenter in blue

res$cost
#[1] 30.30387
sumppdist(res$barycenter, pplist_samecard, penalty=0.1, type="tt", p=2, q=2)
#[1] 30.30387
#attr(,"distances")
#[1] 0.5991515 0.6133397 0.6040680 0.6020058 0.5648000 0.6415018 0.6385394 0.5784291 0.5985299
#[10] 0.6313200 0.7186154 ...

}
\references{
Zvi Drezner, Avram Mehrez and George O. Wesolowsky (1991).\cr
            The facility location problem with limited distances.\cr
            Transportation Science 25.3 (1991): 183-187.\cr
            www.jstor.org/stable/25768490\cr
            \cr
            Raoul Müller, Dominic Schuhmacher and Jorge Mateu (2020).\cr
            Statistics and Computing 30, 953-972.\cr
            \doi{10.1007/s11222-020-09932-y}
}
\seealso{
\code{\link{kmeansbaryeps}} for a variant with epsilon relaxation that is typically faster
}
\author{
Raoul Müller  \email{raoul.mueller@uni-goettingen.de}\cr
        Dominic Schuhmacher \email{schuhmacher@math.uni-goettingen.de}
}
