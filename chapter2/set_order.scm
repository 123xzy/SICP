;set with order
;2018.10.29

(define (element-of-set? x set)
	(cond ((null? set) false)
	((= x (car set)) true)
	((< x (car set)) false)
	(else (element-of-set? x (cdr set)))))

;the running time is O(n)
(define (intersection-set set1 set2)
	(if (or (null? set1) (null? set2))
		'()
		(let ((x1 (car set1)) (x2 (car set2)))
			(cond ((= x1 x2)
				   (cons x1
						(intersection-set (cdr set1)
										  (cdr set2))))
				  ((< x1 x2)
					(intersection-set (cdr set1) set2))
				  ((< x2 x1)
					(intersection-set set1 (cdr set2)))))))

