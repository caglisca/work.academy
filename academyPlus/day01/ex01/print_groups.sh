FT_USER=$1; groups $FT_USER | cut -d: -f2 | tr " " "," | cut -d"," -f2-100
