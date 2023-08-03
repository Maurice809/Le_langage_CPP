# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    init.sh                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/07 11:13:26 by Maurice809        #+#    #+#              #
#    Updated: 2023/07/18 08:05:51 by tmoret           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

date=$(date '+%Y%m%d_%H%M')
git=$(git remote -v | sed '1d' | sed 's/origin//g' | sed 's/(push)//g' | tr -d "\t")

if [ ! -f ".git" ]; then
	git init
fi

if [ ! -f ".gitignore" ]; then
	cp ./util/.gitignore .
fi

git add .
git commit -m "42 Lausanne | $HOSTNAME | $date"
git branch -M main
git remote add origin $1
git push -u origin main
