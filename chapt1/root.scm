;search for zero-point
;as processing as normal way
;use case:(half-interval-method sin 2.0 4.0)
;

(define (close-enough? x y)
  (< (abs (- x y)) 0.001))

(define (average x y)(/ (+ x y) 2))

(define (search f neg-point pos-point)
  (let ((midpoint (average neg-point pos-point)))
    (if (close-enough? neg-point pos-point)
      midpoint
      (let ((test-value (f midpoint)))
        (cond ((positive? test-value)
               (search f neg-point midpoint))
              ((negative? test-value)
               (search f midpoint pos-point))
              (else midpoint))))))

;if we use "search" ,we should let a pair of point (one is negative another is positive)
;so we use "half-interval-method" to judge this 

(define (half-interval-method f a b)
  (let ((a-value (f a))
        (b-value (f b)))
    (cond ((and (negative? a-value)(positive? b-value))
           (search f a b))
          ((and (negative? b-value)(positive? a-value))
           (search f b a))
          (else 
            (error "value are not of oppsite sign" a b)))))



