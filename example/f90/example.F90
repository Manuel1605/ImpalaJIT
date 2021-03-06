!>
!! Copyright 2017 Manuel Fasching <manuel.fasching@tum.de>
!! Distributed under the MIT License
!!
!! Permission is hereby granted, free of charge, to any person obtaining a copy
!! of this software and associated documentation files (the "Software"), to deal
!! in the Software without restriction, including without limitation the rights
!! to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
!! copies of the Software, and to permit persons to whom the Software is furnished
!! to do so, subject to the following conditions:
!!
!! THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
!! INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR
!! PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE
!! FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
!! ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
!! THE SOFTWARE.
!!
#include "impalajit.f90"
program example
	use impalajit
	use, intrinsic :: iso_c_binding
 	implicit none
  	abstract interface

 	function impala_fun_template_2 (a1, a2) bind(c)
          use, intrinsic :: iso_c_binding
          real(c_double), intent(in), value         :: a1, a2
          real(c_double) 										:: impala_fun_template_2
    end function impala_fun_template_2
    end interface

 	type( c_ptr ) :: handle
 	type( c_funptr ) :: cfp
 	procedure(impala_fun_template_2), pointer :: fpp

 	handle = impalajit_compiler_create_with_config("example.conf")
 	CALL impalajit_compiler_compile(handle)
 	
 	cfp = impalajit_compiler_get_function(handle, "example")
 	CALL c_f_procpointer(cfp, fpp)

 	write (*,*) "Result:", fpp(3.0d0, 4.0d0)

 end program example
