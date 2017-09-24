#!/bin/bash

Suites="Clubs
Diamonds
Hearts
Spades"

Values="2
3
4
5
6
7
8
9
10
J
Q
K
A"

suite=($Suites)
values=$($Values)

num_suites=${#suite[*]]}
num_values=${#values[*]}

echo -n "${values[$((RANDOM%num_values))]}"
echo ${suite[$((RANDOM%num_suites))]}


