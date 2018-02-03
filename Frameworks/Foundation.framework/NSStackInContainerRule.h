/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSStackInContainerRule : NSObject <NSLayoutRule> {
    NSLayoutRect * _containingRect;
    long long  _orientation;
    double  _spacing;
    NSArray * _stackedRects;
}

@property (readonly, copy) NSLayoutRect *containingRect;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *identifier;
@property (readonly) long long orientation;
@property (readonly, copy) NSString *ruleDescription;
@property (readonly) double spacing;
@property (readonly, copy) NSArray *stackedRects;
@property (readonly) Class superclass;

+ (id)horizontalStackWithRects:(id)arg1 inContainer:(id)arg2 spacing:(double)arg3;
+ (id)stackWithOrientation:(long long)arg1 stackedRects:(id)arg2 inContainer:(id)arg3 spacing:(double)arg4;
+ (id)verticalStackWithRects:(id)arg1 inContainer:(id)arg2 spacing:(double)arg3;

- (id)containingRect;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithOrientation:(long long)arg1 stackedRects:(id)arg2 containingRect:(id)arg3 spacing:(double)arg4;
- (bool)isEqual:(id)arg1;
- (id)makeChildRules;
- (long long)orientation;
- (id)ruleDescription;
- (double)spacing;
- (id)stackedRects;

@end
