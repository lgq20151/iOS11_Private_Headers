/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebSecurityOrigin : NSObject {
    <WebQuotaManager> * _applicationCacheQuotaManager;
    <WebQuotaManager> * _databaseQuotaManager;
    WebSecurityOriginPrivate * _private;
}

+ (id)webSecurityOriginFromDatabaseIdentifier:(id)arg1;

- (struct SecurityOrigin { struct atomic<unsigned int> { unsigned int x_1_1_1; } x1; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_2_1_1; } x2; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_3_1_1; } x3; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_4_1_1; } x4; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_5_1_1; } x5; struct optional<unsigned short> { bool x_6_1_1; union constexpr_storage_t<unsigned short> { unsigned char x_2_2_1; unsigned short x_2_2_2; } x_6_1_2; } x6; bool x7; bool x8; bool x9; bool x10; int x11; bool x12; bool x13; bool x14; }*)_core;
- (id)_initWithWebCoreSecurityOrigin:(struct SecurityOrigin { struct atomic<unsigned int> { unsigned int x_1_1_1; } x1; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_2_1_1; } x2; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_3_1_1; } x3; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_4_1_1; } x4; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_5_1_1; } x5; struct optional<unsigned short> { bool x_6_1_1; union constexpr_storage_t<unsigned short> { unsigned char x_2_2_1; unsigned short x_2_2_2; } x_6_1_2; } x6; bool x7; bool x8; bool x9; bool x10; int x11; bool x12; bool x13; bool x14; }*)arg1;
- (id)applicationCacheQuotaManager;
- (id)databaseIdentifier;
- (id)databaseQuotaManager;
- (void)dealloc;
- (id)host;
- (id)initWithURL:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned short)port;
- (id)protocol;
- (unsigned long long)quota;
- (void)setQuota:(unsigned long long)arg1;
- (id)stringValue;
- (id)toString;
- (unsigned long long)usage;

@end
