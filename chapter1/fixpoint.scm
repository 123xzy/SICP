;for x,if f(x)=x,call x the fixed point
;we can use f(x),f(f(x)),f(f(f(x))) to find this point
;use case:(fixed-point cos 1.0)

(define tolerance 0.00001)

(define (fixed-point f first-guess)
  (define (close-enough? v1 v2)
    (< (abs (- v1 v2)) tolerance))
  (define (try guess)
    (let ((next (f guess)))
      (if (close-enough? guess next)
        next
        (try next))))
  (try first-guess))

