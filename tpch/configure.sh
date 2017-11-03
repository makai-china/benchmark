#!/bin/bash

# logic: create database -> create tables -> create external tables
# -> load data to tables -> exec sqls -> drop database

# create tables: query/create.sql
# create external tables: query/create_extern.sql
# load data to tables: query/load_table.sql

# result and report are stored in result dir(current_dir/result/*.result or *.report)

# install bc if 'bc command not found'
# yum install -y bc

# database's name, if it does not exist, script will create it automatically
database=tpch1s

# @param: dataloaded
# if false, script will load data automatically
# if true, script will not load data, only exec sql in query_list
dataloaded="false"

# @param: testhot
# if true, sql in query_list will exec twice
# if false, sql in query_list will exec only once 
testhot="true"

# performance testcase
query_list=(
	q1.sql q2.sql q3.sql q4.sql q5.sql q6.sql q7.sql q8.sql q9.sql q10.sql
	q11.sql q12.sql q13.sql q14.sql q15.sql q16.sql q17.sql q18.sql q19.sql q20.sql
	q21.sql q22.sql
)
