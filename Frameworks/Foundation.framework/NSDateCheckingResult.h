/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSDateCheckingResult : NSTextCheckingResult {
    NSDate * _date;
    double  _duration;
    NSString * _leadingText;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    NSDate * _referenceDate;
    bool  _timeIsApproximate;
    bool  _timeIsPast;
    bool  _timeIsSignificant;
    NSTimeZone * _timeZone;
    NSString * _trailingText;
    id  _underlyingResult;
}

@property (readonly) double duration;
@property (readonly) NSDate *referenceDate;
@property (readonly) bool timeIsApproximate;
@property (readonly) bool timeIsPast;
@property (readonly) bool timeIsSignificant;
@property (readonly) NSTimeZone *timeZone;
@property (readonly) void*underlyingResult;

+ (bool)supportsSecureCoding;

- (bool)_adjustRangesWithOffset:(long long)arg1;
- (id)date;
- (void)dealloc;
- (id)description;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 date:(id)arg2;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 referenceDate:(id)arg5;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 referenceDate:(id)arg5 underlyingResult:(void*)arg6;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 referenceDate:(id)arg5 underlyingResult:(void*)arg6 timeIsSignificant:(bool)arg7 timeIsApproximate:(bool)arg8;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 referenceDate:(id)arg5 underlyingResult:(void*)arg6 timeIsSignificant:(bool)arg7 timeIsApproximate:(bool)arg8 timeIsPast:(bool)arg9;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 referenceDate:(id)arg5 underlyingResult:(void*)arg6 timeIsSignificant:(bool)arg7 timeIsApproximate:(bool)arg8 timeIsPast:(bool)arg9 leadingText:(id)arg10 trailingText:(id)arg11;
- (id)leadingText;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (id)referenceDate;
- (id)resultByAdjustingRangesWithOffset:(long long)arg1;
- (unsigned long long)resultType;
- (bool)timeIsApproximate;
- (bool)timeIsPast;
- (bool)timeIsSignificant;
- (id)timeZone;
- (id)trailingText;
- (void*)underlyingResult;

@end
