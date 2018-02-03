/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebScriptCallFramePrivate : NSObject {
    struct JSValue { 
        union EncodedValueDescriptor { 
            long long asInt64; 
            struct JSCell {} *ptr; 
            struct { 
                int payload; 
                int tag; 
            } asBits; 
        } u; 
    }  exceptionValue;
    struct String { 
        struct RefPtr<WTF::StringImpl> { 
            struct StringImpl {} *m_ptr; 
        } m_impl; 
    }  functionName;
    WebScriptObject * globalObject;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;

@end
