/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface _CFStreamDelegate : NSObject <NSStreamDelegate> {
    union { 
        int (*_rcb)(); 
        int (*_wcb)(); 
        int (*genericCallback)(); 
        void *genericPointer; 
    }  _cb;
    struct { 
        long long version; 
        void *info; 
        int (*retain)(); 
        int (*release)(); 
        int (*copyDescription)(); 
    }  _client;
    unsigned long long  _flags;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)initWithStreamEvents:(unsigned long long)arg1 callback:(void*)arg2 context:(struct { long long x1; void *x2; int (*x3)(); int (*x4)(); int (*x5)(); }*)arg3;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;

@end