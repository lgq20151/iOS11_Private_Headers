/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebItemProviderRegistrationInfo : NSObject {
    struct RetainPtr<NSData> { 
        void *m_ptr; 
    }  _data;
    struct RetainPtr<id<UIItemProviderWriting> > { 
        void *m_ptr; 
    }  _representingObject;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _typeIdentifier;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) <UIItemProviderWriting> *representingObject;
@property (nonatomic, readonly) NSString *typeIdentifier;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)data;
- (id)initWithRepresentingObject:(id)arg1 typeIdentifier:(id)arg2 data:(id)arg3;
- (id)representingObject;
- (id)typeIdentifier;

@end
