data1 <- read.table(".\\ukcomp1_r.dat", header=TRUE)
data2 <- read.table(".\\ukcomp2_r.dat", header=TRUE)

new <-data1["LOGSALE"]/data1["CAPINT"]
dp <- new * data1["CURRAT"]/data1["NFATAST"]
