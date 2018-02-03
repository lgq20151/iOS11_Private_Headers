/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWRenderListParameters : NSObject <BWRenderListParameterListProvider> {
    struct BWRenderListParameterList { 
        struct BWRenderListParameterNode {} *slh_first; 
    }  _parameterList;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct BWRenderListParameterList { struct BWRenderListParameterNode {} *x1; }*parameterList;
@property (readonly) Class superclass;

+ (void)initialize;

- (void)dealloc;
- (/* Warning: unhandled struct encoding: '{BWRenderListParameterNode={?=^{BWRenderListParameterNode}}@}' */ struct BWRenderListParameterNode { struct { struct BWRenderListParameterNode {} *x_1_1_1; } x1; id x2; }*)firstNode;
- (id)init;
- (id)initWithParameterList:(struct BWRenderListParameterList { struct BWRenderListParameterNode {} *x1; }*)arg1;
- (struct BWRenderListParameterList { struct BWRenderListParameterNode {} *x1; }*)parameterList;

@end
