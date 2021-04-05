def rev_lines(inputfilename,outputfilename):
    with open(inputfilename) as infile, open(outputfilename,'w') as outfile:
        for line in infile:
            outfile.write(f'{line.rstrip()[::-1]}\n')
rev_lines('/etc/passwd','/home/asimcode/outfile.txt')
