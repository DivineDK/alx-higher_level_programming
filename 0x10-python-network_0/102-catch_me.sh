#!/bin/bash
# Make the request to the server
curl -sX PUT -d "user_id=98" 0.0.0.0:5000/catch_me -H "Origin: HolbertonSchool"
