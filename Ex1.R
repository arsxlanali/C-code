install.packages("dgof")
install.packages("pracma")
data <- read.table(file = ".\\data1.txt");
nobs <- data;
len <- as.integer(nrow(data));
times_ia <- rexp(len);
times_a <- cumsum(times_ia);
t_total <- max(times_a);

bin_limits <- c(0.0, 0.5, 1.0, 1.5, 2.0 , max(times_ia));
he <- hist(times_ia, breaks = bin_limits);
nfreq_ia <- he$counts

library("dgof")

ks.test(times_a, ecdf(runif(t_total, min = 0)) )

lambd <- len * 1. / t_total
scale <- 1. / lambd
expected_ia <- diff(pexp(bin_limits, rate=scale)* len)
print(class(nfreq_ia))
print(class(expected_ia))
chisq.test(nfreq_ia, expected_ia )

library('pracma')

n_mean_bin <- 10
n_bins_a <- len/10;
bin_limits_a = linspace(0, t_total, n_bins_a+1)
he = hist(times_a, breaks=bin_limits_a)
nfreq_a <- he$counts;


expected_a<- rep(as.double(1/n_bins_a * len), times=n_bins_a);
print(class(nfreq_a))
print(class(expected_a))
chisq.test(nfreq_a, expected_a)






