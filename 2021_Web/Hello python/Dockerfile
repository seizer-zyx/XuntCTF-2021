FROM ubuntu:20.04

RUN sed -i 's/archive.ubuntu.com/mirrors.ustc.edu.cn/g' /etc/apt/sources.list
RUN apt update
RUN apt install -y python3
RUN apt install -y python3-pip
RUN pip3 install flask -i https://pypi.tuna.tsinghua.edu.cn/simple

COPY static /root/static
COPY index.py /root
COPY flag /root

ENTRYPOINT python3 /root/index.py

EXPOSE 80
