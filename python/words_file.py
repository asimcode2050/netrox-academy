def word_counts(filename):
    counts = {'words':0,
    'characters':0,
    'lines':0
    }
    uniq_words = set()
    for line in open(filename):
        counts['lines']+= 1
        counts['characters']+= len(line)
        counts['words'] += len(line.split())
        uniq_words.update(line.split())
        counts['unique_words'] = len(uniq_words)
    
    for key, value in counts.items():
            print(f'{key} : {value}')


word_counts('/home/asimcode/book.txt')
