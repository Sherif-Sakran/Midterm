COPY ./code /code
RUN apt get update
RUN apt get upgrade y
RUN apt get install nasm make autoconf automake gcc g++ qemu system --* bochs * vim curl wget
apt transport https ca certificates software properties common y
RUN cd code;make
ENTRYPOINT /code/< executable_name
WORKDIR /code
