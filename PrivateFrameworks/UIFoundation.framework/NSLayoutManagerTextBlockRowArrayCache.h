/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSLayoutManagerTextBlockRowArrayCache : NSObject {
    bool  _collapseBorders;
    double  _containerWidth;
    NSArray * _rowArray;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _rowCharRange;
}

- (void)dealloc;
- (id)initWithRowCharRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 containerWidth:(double)arg2 rowArray:(id)arg3 collapseBorders:(bool)arg4;

@end
