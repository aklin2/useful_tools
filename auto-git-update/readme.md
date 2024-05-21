# Auto-Git-Update
This shell script will read the current directory it is in.

Then cd into it.

Then git add -A

Then git commit message the current YYYY-MM-DD hh:mm:ss


# How to use
Drop this file into your project folder.

If the folder does not already have a `.git` folder, then `git init`

Then create a crontab and tell your cron to use this script.

Example:

```
(crontab -l 2>/dev/null; echo "*/5 * * * * /path/to/update.sh") | crontab -
```
^ If you run that command in your shell, it will create a cron to run the script every 5 minutes


# Usecase
This is useful for small projects that you just want to auto update and save your work.

DO NOT use this for any production work.
