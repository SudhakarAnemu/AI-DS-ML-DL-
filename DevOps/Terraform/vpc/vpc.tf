resource "aws_vpc" "main-vpc" {
    cidr_block = "10.0.0.0/16"
    enable_dns_hostnames = "true"
    tags = {
        Name = "amit.01-vpc"
    }
}