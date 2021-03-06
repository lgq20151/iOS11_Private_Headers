/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHStyleMapper : NSObject <TSKStyleMapper> {
    bool  mForceMatchStyle;
    <TSKStyleMapper> * mUnderlyingMapper;
}

@property (nonatomic, readonly) bool clientsMustRemap;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool forceMatchStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) <TSKStyleMapper> *underlyingMapper;

+ (id)mappedStyleWithMapper:(id)arg1 forStyle:(id)arg2 bakeComputable:(bool)arg3;
+ (id)mappedStylesWithMapper:(id)arg1 forStyles:(id)arg2 bakeComputable:(bool)arg3;
+ (id)mapperWithMapper:(id)arg1;
+ (void)replaceReferencedStylesInMap:(id)arg1 withMapper:(id)arg2;

- (bool)clientsMustRemap;
- (void)dealloc;
- (bool)forceMatchStyle;
- (id)init;
- (id)initWithMapper:(id)arg1;
- (id)mappedStyleForStyle:(id)arg1;
- (id)mappedStyleForStyle:(id)arg1 bakeComputable:(bool)arg2;
- (void)popMappingContext:(id)arg1;
- (void)pushMappingContext:(id)arg1;
- (void)replaceReferencedStylesInMap:(id)arg1;
- (void)setForceMatchStyle:(bool)arg1;
- (id)targetStylesheet;
- (id)underlyingMapper;

@end
