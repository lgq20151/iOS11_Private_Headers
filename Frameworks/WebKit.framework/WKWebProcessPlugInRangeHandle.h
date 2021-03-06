/* made by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKWebProcessPlugInRangeHandle : NSObject <WKObject> {
    struct ObjectStorage<WebKit::InjectedBundleRangeHandle> { 
        struct type { 
            unsigned char __lx[24]; 
        } data; 
    }  _rangeHandle;
}

@property (readonly) /* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*_apiObject;
@property (readonly) struct InjectedBundleRangeHandle { int (**x1)(); id x2; /* Warning: Unrecognized filer type: 'R' using 'void*' */ void*x3; void*x4; float x5; void*x6; void*x7; void*x8; unsigned int x9/* : ? */; unsigned char x10; out const void*x11; SEL x12; SEL x13; void*x14; void*x15; in void*x16; void*x17; void*x18; void*x19; struct Range {} *x20; }*_rangeHandle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) WKWebProcessPlugInFrame *frame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *text;

+ (id)rangeHandleWithJSValue:(id)arg1 inContext:(id)arg2;

- (/* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*)_apiObject;
- (struct InjectedBundleRangeHandle { int (**x1)(); id x2; /* Warning: Unrecognized filer type: 'R' using 'void*' */ void*x3; void*x4; float x5; void*x6; void*x7; void*x8; unsigned int x9/* : ? */; unsigned char x10; out const void*x11; SEL x12; SEL x13; void*x14; void*x15; in void*x16; void*x17; void*x18; void*x19; struct Range {} *x20; }*)_rangeHandle;
- (void)dealloc;
- (id)detectDataWithTypes:(unsigned long long)arg1 context:(id)arg2;
- (id)frame;
- (id)text;

@end
