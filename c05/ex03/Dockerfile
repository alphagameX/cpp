FROM debian:buster-slim
ENV DEBIAN_FRONTEND=noninteractive
RUN apt update
RUN apt install -y build-essential valgrind make clang gcc
WORKDIR /project
CMD make run
