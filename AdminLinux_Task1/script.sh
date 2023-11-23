#!/bin/bash
cd ~
mkdir mydirectory
cd mydirectory
mkdir seconddirectory
cd seconddirectory
touch mynotepaper
cp mynotepaper ../
cd ../
mv mynotepaper myoldpaper
