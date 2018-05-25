;define rational numbers' operation
;define rational x has number n and denom m then x = n/m
;
;
;

;make-rat<n><d>:return a rational numbers,its number is n and denom is m
;add-rat <x><y>:return x+y
(define (add-rat x y)
  (make-rat (+ (* (number x) (denom y))
               (* (number y) (denom x)))
            (* (denom x)(denom y))))

;as add-rat does,we define sub-rat
(define (sub-rat x y)
  (make-rat (- (* (number x) (denom y))
               (* (number y) (denom x)))
             (* (denom x)(denom y))))

(define (mul-rat x y)
  (make-rat (* (number x) (number y))
            (* (denom x) (denom y))))

(define (div-rat x y)
  (make-rat (* (number x) (denom y))
            (* (denom x) (number y))))

(define (equal-rat? x y)
  (= (* (number x)(denom y))
     (* (denom x) (number y))))


