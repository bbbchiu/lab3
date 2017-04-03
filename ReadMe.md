hwA:
	compile: make
	run: ./main

	how to write the pro:
		First, use file readin the data.Then, store it with vector.
		use sort to find the biggest five weight.Then, add it.Print
		it out.

hwB:
	compile: make hwb
	run ./hwb
	
	how to write the pro:
		copy it.
	
	the difference between sort and insert_sort:
		data: 1000 
			sort(): 0.000161 seconds
			insertion_sort(): 0.007274 seconds
		data: 10000
			sort(): 0.008171 seconds
			insertion_sort(): 0.809923 seconds
		data: 100000
			sort(): 0.02361 seconds
			insertion+sort(): run for too long.

		the time needed fort sort(n log(n)) is less than insert_sort(n*n)		
