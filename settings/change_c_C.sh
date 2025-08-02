#!/bin/zsh

for dir in c*/; do
  # Check if it's a directory and starts with lowercase 'c'
  if [ -d "$dir" ]; then
    newname="C${dir:1}"  # Replace lowercase 'c' with uppercase 'C'
    mv "$dir" "$newname"
    echo "Renamed: $dir -> $newname"
  fi
done
