CC=gcc

.PHONY: clean test all performance

all: queen hanoi suduku 24-points bulbs permutation combination max-subsequence-sum big-integer quick-sort bubble-sort random-generator insert-sort overlap longest

queen: queen.c
	$(CC) -o queen queen.c

hanoi: hanoi.c
	$(CC) -o hanoi hanoi.c

suduku: suduku.c
	$(CC) -o suduku suduku.c

24-points: 24-points.c
	$(CC) -o 24-points 24-points.c

bulbs: bulbs.c
	$(CC) -o bulbs bulbs.c

permutation: permutation.c
	$(CC) -o permutation permutation.c

combination: combination.c
	$(CC) -o combination combination.c

max-subsequence-sum: max-subsequence-sum.c
	$(CC) -o max-subsequence-sum max-subsequence-sum.c

big-integer: big-integer.c
	$(CC) -o big-integer big-integer.c

quick-sort: quick-sort.c
	$(CC) -o quick-sort quick-sort.c

bubble-sort: bubble-sort.c
	$(CC) -o bubble-sort bubble-sort.c

random-generator: random-generator.c
	$(CC) -o random-generator random-generator.c

insert-sort: insert-sort.c
	$(CC) -o insert-sort insert-sort.c

overlap: overlap.c
	$(CC) -o overlap overlap.c

longest: longest.c
	$(CC) -o longest longest.c

clean:
	rm -f queen hanoi suduku 24-points bulbs permutation combination max-subsequence-sum big-integer quick-sort bubble-sort random-generator insert-sort overlap longest a.out *~

test:
	./queen
	./hanoi < data/hanoi
	./suduku < data/suduku
	./24-points < data/24-points
	./bulbs
	./permutation
	./combination
	./max-subsequence-sum
	./big-integer < data/big-integer
	./quick-sort < data/sort-100
	./bubble-sort < data/sort-100
	./random-generator < data/random-generator
	./insert-sort < data/sort-100
	./overlap < data/overlap
	./longest < data/longest

## for line in $(cat data/longest); do echo $line;echo $line | ./longest;echo; done

performance:
	time ./quick-sort 0<data/sort-10000 1>/dev/null
	time ./bubble-sort 0<data/sort-10000 1>/dev/null
	time ./insert-sort 0<data/sort-10000 1>/dev/null
