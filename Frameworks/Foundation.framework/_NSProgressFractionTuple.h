/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSProgressFractionTuple : NSObject {
    _NSProgressFraction * _next;
    _NSProgressFraction * _previous;
}

@property (copy) _NSProgressFraction *next;
@property (copy) _NSProgressFraction *previous;

- (void)dealloc;
- (id)description;
- (id)next;
- (id)previous;
- (bool)previousIsEqualToNext;
- (void)setNext:(id)arg1;
- (void)setPrevious:(id)arg1;

@end