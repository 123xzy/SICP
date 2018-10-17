;(make-rat <n><d>)
;(numer <x>)
;(denom <x>)
;if three funcs above are usefull
;we can make compute of rations

(define (add-rat x y)
	(make-rat (+ (* (numer x)(denom y))
				 (* (denom x)(numer y)))
			  (* (denom x)(denom y))))

(define (sub-rat x y)
	(make-rat (- (* (numer x)(denom y))
				 (* (denom x)(numer y)))
			  (* (denom x)(denom y))))

(define (mul-rat x y)
	(make-rat (* (numer x)(numer y))
			  (* (denom x)(denom y))))

(define (div-rat x y)
	(make-rat (* (numer x)(denom y))
			  (* (denom x)(numer y))))

(define (equal-rat? x y)
	(= (* (numer x)(denom y))
	   (* (denom x)(numer y))))

;cons means "construct"
(define (make-rat n d)
	(let ((g (gcd n d))))
	(cond (< 0 (* n d))
		(cons (- abs(/ n g)) abs(/ n d))
		(cons (abs(/ n g)) abs(/ n d))))
	
;car means contents of address part of register
(define (numer x)(car x))

;cdr means contents of decrement part of register
(define (denom x)(cdr x))

(define (print-rat x)
	(newline)
	(display (numer x))
	(display "/")
	(display (denom x)))
