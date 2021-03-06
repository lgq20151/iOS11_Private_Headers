/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPTextRowStyle : NSObject {
    LPTextViewStyle * _leading;
    LPTextViewStyle * _trailing;
}

@property (nonatomic, readonly) LPTextViewStyle *leading;
@property (nonatomic, readonly) LPTextViewStyle *trailing;

- (void).cxx_destruct;
- (id)init;
- (id)leading;
- (id)left;
- (id)right;
- (id)trailing;

@end
