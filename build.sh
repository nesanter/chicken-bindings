#!/bin/bash

SRCS=hello-world.scm
PKGS=gtk+-3.0

chicken-csc $SRCS -C "$(pkg-config --cflags $PKGS)" -L "$(pkg-config --libs $PKGS)" -X bind
