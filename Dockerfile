#Set base ubuntu 20.04
FROM ubuntu 20.04

ARG DEBIAN_FRONTEND=noninteractive
RUN apt update
RUN apt install -y python3.8 python3-pip

# Set workdir 
WORKDIR /app
