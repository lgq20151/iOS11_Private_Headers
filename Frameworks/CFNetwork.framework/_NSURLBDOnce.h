/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface _NSURLBDOnce : NSObject {
    id /* block */  fBlock;
    bool  fDone;
}

- (void)dealloc;
- (void)doit;
- (id)initWithBlock:(id /* block */)arg1;

@end
