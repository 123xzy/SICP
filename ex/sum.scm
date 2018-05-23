;this is a model "abstract" from sum-cubes,pi-sum and sum-intergers
;we can use it as a base component and formalize others concept

;term and next are procedure parameters
(define (sum term a next b)
  (if(> a b)
    0
    (+ (term a)
       (sum term (next a)next b))))

;sum-cubes with sum model 
;_indef_ 

(define (cube x)(* x x x))

(define (inc n) (+ n 1))

(define (sum-cubes a b)
  (sum cube a inc b))

;endef

;sum-intergers based on sum model
;_indef_

(define (identity x)x)
  
(define (sum-integers a b)
    (sum identity a inc b))

;endef

;pi-sum based on sum model
;_indef_

(define (pi-sum a b)
  (define (pi-term x)
    (/ 1.0 (* x (+ x 2))))
  (define (pi-next x)
    (+ x 4))
  (sum pi-term a pi-next b))

;endef

;use list to calculate integral 
;_indef_

(define (integral f a b dx)
    (define (add-dx x)(+ x dx))
    (* (sum f (+ a (/ dx 2)) add-dx b)
       dx))

;_endef

