/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
 */

@interface _CUTWeakReference : NSObject {
    id  _object;
    unsigned long long  _objectAddress;
}

@property (nonatomic) id object;
@property (nonatomic) unsigned long long objectAddress;

- (void).cxx_destruct;
- (id)object;
- (unsigned long long)objectAddress;
- (void)setObject:(id)arg1;
- (void)setObjectAddress:(unsigned long long)arg1;

@end
