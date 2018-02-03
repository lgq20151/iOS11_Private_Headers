/* made by EzioChiu
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface _CSStore : NSObject <NSMutableCopying, NSSecureCoding> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    struct unique_ptr<CSStore2::Store, std::__1::default_delete<CSStore2::Store> > { 
        struct __compressed_pair<CSStore2::Store *, std::__1::default_delete<CSStore2::Store> > { 
            struct Store {} *__first_; 
        } __ptr_; 
    }  _store;
}

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 error:(id*)arg2;
- (id)initWithError:(id*)arg1;
- (id)initWithStoreNoCopy:(struct Store { id x1; bool x2; struct array<unsigned int, 64> { unsigned int x_3_1_1[64]; } x3; struct atomic<long long> { long long x_4_1_1; } x4; struct atomic<long long> { long long x_5_1_1; } x5; }*)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1 error:(id*)arg2;
- (void)setExpectedAccessQueue:(id)arg1;

@end
