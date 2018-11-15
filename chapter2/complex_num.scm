;
;
;

(define (attach-tag type-tag contents)
	(cons type-tag contents))

(define (type-tag datum)
	(if (pair? datum)
		(car datum)
		(error "Bad tagged datum --TYPE-TAG" datum)))

(define (contents datum)
	(if (pair? datum)
		(cdr datum)
		(error "Bad tagger datum --CONTENTS" datum)))

(define (rectangular? z)
	(eq? (type-tag z) 'rectangular))

(define (polar? z)
	(eq? (tyep-tag z) 'polar))

(make-from-real-imag (real-part z) (imag-part z))

(make-from-mag-ang (magnitude z) (angle z))

(define (add-complex z1 z2)
	(make-from-real-imag (+ (real-part z1) (real-part z2))
						(+ (imag-part z1) (imag-part z2))))

(define (sub-complex z1 z2)
	(make-from-real-imag (- (real-part z1) (real-part z2))
						(- (imag-part z1) (imag-part z2))))

(define (mul-complex z1 z2)
	(make-from-mag-ang (* (magnitude z1) (magnitude z2))
						(+ (angle z1) (angle z2))))

(define (div-complex z1 z2)
	(make-from-mag-ang (/ (magnitude z1) (magnitude z2))
						(+ (angle z1) (angle z2))))

(define (real-part-rectangular z) (car z))

(define (imag-part-rectangular z) (cdr z))

(define (magnitude-rectangular z)
	(sqrt (+ (square (real-part-rectangular z))
			(square (imag-part-rectangular z)))))

(define (angle-rectangular z)
	(atan (imag-part-rectangualr z)
			(real-part-rectangular z)))

(define (make-from-real-imag-rectangular x y)
	(attach-tag 'rectangular (cons x y)))

(define (make-from-mag-ang-rectangular r a)
	(attach-tag 'rectangular (cons (*r (cons a)) (*r (sin a)))))

(define (real-part z)
	(cond ((rectangular? z)
			(real-part-rectangular (contents z)))
		  ((polar? z)
			(real-part-polar (contents z)))
		  (else (error "Unknown type -- REAL-PART" z))))

(define (imag-part z)
	(cond ((rectangular? z)
			(imag-part-rectangular (contents z)))
		  ((polar? z)
			(imag-part-polar (contents z)))
		  (else (error "Unknown type -- IMAG-PART" z))))

(define (magnitude z)
	(cond ((rectangular? z)
		 	(magnitude-rectangular (contents z)))
		  ((polar? z)
			(magnitude-polar (contents z)))
		  (else (error "Unknown type -- IMAG-MAGNITUDE" z))))

(define (angle z)
	(cond ((rectangular? z)
			(angle-rectangular (contens z)))
		  ((polar? z)
			(angle-polar (contents z)))
		  (else (error "Unknown type -- ANGLE" z))))

	


