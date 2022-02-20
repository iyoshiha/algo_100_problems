#! /bin/bash

echo "put the directory name :"
read DirectoryName
cp -r base "./$DirectoryName"
git checkout -b $DirectoryName
echo "`ls | grep $DirectoryName` directory and branch is created!"
