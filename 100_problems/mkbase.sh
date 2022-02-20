#! /bin/bash

echo "put the directory name :"
read DirectoryName
cp -r base "./$DirectoryName"
git branch "$DirectoryName"
git checkout "$DirectoryName"
echo "$DirectoryName directory and branch is created!"
