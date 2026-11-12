flag = -c
compiler = cc

exe: stu_main.o stu_add.o stu_del.o stu_print.o stu_modify.o stu_save.o stu_sort.o stu_rev.o delete_all.o free_all.o
	$(compiler) stu_main.o stu_add.o stu_del.o stu_print.o stu_modify.o stu_save.o stu_sort.o stu_rev.o delete_all.o free_all.o -o student

stu_main.o: stu_main.c
	$(compiler) $(flag) $^ -o $@

stu_add.o: stu_add.c
	$(compiler) $(flag) $^ -o $@

stu_del.o: stu_del.c
	$(compiler) $(flag) $^ -o $@

stu_print.o: stu_print.c
	$(compiler) $(flag) $^ -o $@

stu_modify.o: stu_modify.c
	$(compiler) $(flag) $^ -o $@

stu_save.o: stu_save.c
	$(compiler) $(flag) $^ -o $@

stu_sort.o: stu_sort.c
	$(compiler) $(flag) $^ -o $@

stu_rev.o: stu_rev.c
	$(compiler) $(flag) $^ -o $@

delete_all.o: delete_all.c
	$(compiler) $(flag) $^ -o $@


free_all.o: free_all.c
	$(compiler) $(flag) $^ -o $@

clean:
	@echo "Cleaning up..."
	@rm -f *.o student



