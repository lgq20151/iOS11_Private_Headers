/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NULayoutContextSizer : NSObject {
    NSArray * _attributes;
    <NUSizer> * _sizer;
}

@property (nonatomic, readonly) NSArray *attributes;
@property (nonatomic, retain) <NUSizer> *sizer;

- (void).cxx_destruct;
- (id)attributes;
- (id)description;
- (id)initWithSizer:(id)arg1 attributes:(id)arg2;
- (bool)matchForLayoutContext:(id)arg1;
- (void)setSizer:(id)arg1;
- (id)sizer;

@end
