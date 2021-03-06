/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISlidingBarStateRequest : NSObject <NSCopying> {
    double  _bounce;
    double  _leadingWidth;
    double  _trailingWidth;
    bool  _userInitiated;
}

@property (nonatomic) double bounce;
@property (nonatomic) double leadingWidth;
@property (nonatomic) double trailingWidth;
@property (nonatomic) bool userInitiated;

- (double)bounce;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (double)leadingWidth;
- (void)setBounce:(double)arg1;
- (void)setLeadingWidth:(double)arg1;
- (void)setTrailingWidth:(double)arg1;
- (void)setUserInitiated:(bool)arg1;
- (double)trailingWidth;
- (bool)userInitiated;

@end
