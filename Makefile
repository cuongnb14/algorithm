all: clean

clean:
	find ./algorithm -regextype posix-extended -regex ".*(out|o)" -delete
