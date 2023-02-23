#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class KMMSHAREDKoin_coreKoin, KMMSHAREDKotlinUnit, NSError, KMMSHAREDKotlin_clientPet, KMMSHAREDDKTAnalyticsTracking, KMMSHAREDKoin_coreModule, KMMSHAREDKoin_coreScope, KMMSHAREDKoin_coreParametersHolder, KMMSHAREDKotlinLazyThreadSafetyMode, KMMSHAREDKoin_coreLogger, KMMSHAREDKoin_coreInstanceRegistry, KMMSHAREDKoin_corePropertyRegistry, KMMSHAREDKoin_coreScopeRegistry, KMMSHAREDKotlinThrowable, KMMSHAREDKotlinArray<T>, KMMSHAREDKotlinException, KMMSHAREDKotlinRuntimeException, KMMSHAREDKotlinIllegalStateException, KMMSHAREDKotlin_clientCategory, KMMSHAREDKotlin_clientTag, KMMSHAREDKotlin_clientPetStatus, KMMSHAREDKotlin_clientPetCompanion, KMMSHAREDKoin_coreKoinDefinition<R>, KMMSHAREDKoin_coreInstanceFactory<T>, KMMSHAREDKoin_coreSingleInstanceFactory<T>, KMMSHAREDKoin_coreScopeDSL, KMMSHAREDKoin_coreLockable, KMMSHAREDKoin_coreParametersHolderCompanion, KMMSHAREDKotlinEnumCompanion, KMMSHAREDKotlinEnum<E>, KMMSHAREDKoin_coreLevel, KMMSHAREDKoin_coreScopeRegistryCompanion, KMMSHAREDKotlin_clientCategoryCompanion, KMMSHAREDKotlin_clientTagCompanion, KMMSHAREDKotlin_clientPetStatusCompanion, KMMSHAREDKoin_coreBeanDefinition<T>, KMMSHAREDKoin_coreInstanceFactoryCompanion, KMMSHAREDKoin_coreInstanceContext, KMMSHAREDKoin_coreKind, KMMSHAREDKoin_coreCallbacks<T>, KMMSHAREDKotlinx_serialization_coreSerializersModule, KMMSHAREDKotlinx_serialization_coreSerialKind, KMMSHAREDKotlinNothing;

@protocol KMMSHAREDKoin_coreKoinComponent, KMMSHAREDPlatform, KMMSHAREDKoin_coreKoinScopeComponent, KMMSHAREDKoin_coreQualifier, KMMSHAREDKotlinKClass, KMMSHAREDKotlinLazy, KMMSHAREDKoin_coreScopeCallback, KMMSHAREDKotlinKDeclarationContainer, KMMSHAREDKotlinKAnnotatedElement, KMMSHAREDKotlinKClassifier, KMMSHAREDKotlinComparable, KMMSHAREDKotlinIterator, KMMSHAREDKotlinx_serialization_coreKSerializer, KMMSHAREDKotlinx_serialization_coreEncoder, KMMSHAREDKotlinx_serialization_coreSerialDescriptor, KMMSHAREDKotlinx_serialization_coreSerializationStrategy, KMMSHAREDKotlinx_serialization_coreDecoder, KMMSHAREDKotlinx_serialization_coreDeserializationStrategy, KMMSHAREDKotlinx_serialization_coreCompositeEncoder, KMMSHAREDKotlinAnnotation, KMMSHAREDKotlinx_serialization_coreCompositeDecoder, KMMSHAREDKotlinx_serialization_coreSerializersModuleCollector;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface KMMSHAREDBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface KMMSHAREDBase (KMMSHAREDBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface KMMSHAREDMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface KMMSHAREDMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorKMMSHAREDKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface KMMSHAREDNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface KMMSHAREDByte : KMMSHAREDNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface KMMSHAREDUByte : KMMSHAREDNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface KMMSHAREDShort : KMMSHAREDNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface KMMSHAREDUShort : KMMSHAREDNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface KMMSHAREDInt : KMMSHAREDNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface KMMSHAREDUInt : KMMSHAREDNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface KMMSHAREDLong : KMMSHAREDNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface KMMSHAREDULong : KMMSHAREDNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface KMMSHAREDFloat : KMMSHAREDNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface KMMSHAREDDouble : KMMSHAREDNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface KMMSHAREDBoolean : KMMSHAREDNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((swift_name("Koin_coreKoinComponent")))
@protocol KMMSHAREDKoin_coreKoinComponent
@required
- (KMMSHAREDKoin_coreKoin *)getKoin __attribute__((swift_name("getKoin()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DKTAnalyticsTracking")))
@interface KMMSHAREDDKTAnalyticsTracking : KMMSHAREDBase <KMMSHAREDKoin_coreKoinComponent>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRequestNoResultWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("getRequestNoResult(completionHandler:)")));
- (KMMSHAREDKotlinUnit *(^(^)(KMMSHAREDKotlinUnit *(^)(KMMSHAREDKotlinUnit *, KMMSHAREDKotlinUnit *), KMMSHAREDKotlinUnit *(^)(NSError *, KMMSHAREDKotlinUnit *)))(void))getRequestNoResultNative __attribute__((swift_name("getRequestNoResultNative()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRequestWithResultWithCompletionHandler:(void (^)(NSArray<KMMSHAREDKotlin_clientPet *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRequestWithResult(completionHandler:)")));
- (KMMSHAREDKotlinUnit *(^(^)(KMMSHAREDKotlinUnit *(^)(NSArray<KMMSHAREDKotlin_clientPet *> *, KMMSHAREDKotlinUnit *), KMMSHAREDKotlinUnit *(^)(NSError *, KMMSHAREDKotlinUnit *)))(void))getRequestWithResultNative __attribute__((swift_name("getRequestWithResultNative()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DKTAnalyticsTrackingHelper")))
@interface KMMSHAREDDKTAnalyticsTrackingHelper : KMMSHAREDBase <KMMSHAREDKoin_coreKoinComponent>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) KMMSHAREDDKTAnalyticsTracking *dktAnalyticsTracking __attribute__((swift_name("dktAnalyticsTracking")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Greeting")))
@interface KMMSHAREDGreeting : KMMSHAREDBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)greet __attribute__((swift_name("greet()")));
@end

__attribute__((swift_name("Platform")))
@protocol KMMSHAREDPlatform
@required
- (void)common __attribute__((swift_name("common()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSPlatform")))
@interface KMMSHAREDIOSPlatform : KMMSHAREDBase <KMMSHAREDPlatform>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)ios __attribute__((swift_name("ios()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DKTAnalyticsTrackingKt")))
@interface KMMSHAREDDKTAnalyticsTrackingKt : KMMSHAREDBase
@property (class, readonly) KMMSHAREDKoin_coreModule *dktAnalyticsTrackingModule __attribute__((swift_name("dktAnalyticsTrackingModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformKt")))
@interface KMMSHAREDPlatformKt : KMMSHAREDBase
+ (id<KMMSHAREDPlatform>)getPlatform __attribute__((swift_name("getPlatform()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DKTAnalyticsTrackingHelperKt")))
@interface KMMSHAREDDKTAnalyticsTrackingHelperKt : KMMSHAREDBase
+ (void)doInit __attribute__((swift_name("doInit()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoin")))
@interface KMMSHAREDKoin_coreKoin : KMMSHAREDBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)close __attribute__((swift_name("close()")));
- (void)createEagerInstances __attribute__((swift_name("createEagerInstances()")));
- (KMMSHAREDKoin_coreScope *)createScopeT:(id<KMMSHAREDKoin_coreKoinScopeComponent>)t __attribute__((swift_name("createScope(t:)")));
- (KMMSHAREDKoin_coreScope *)createScopeScopeId:(NSString *)scopeId __attribute__((swift_name("createScope(scopeId:)")));
- (KMMSHAREDKoin_coreScope *)createScopeScopeId:(NSString *)scopeId source:(id _Nullable)source __attribute__((swift_name("createScope(scopeId:source:)")));
- (KMMSHAREDKoin_coreScope *)createScopeScopeId:(NSString *)scopeId qualifier:(id<KMMSHAREDKoin_coreQualifier>)qualifier source:(id _Nullable)source __attribute__((swift_name("createScope(scopeId:qualifier:source:)")));
- (void)declareInstance:(id _Nullable)instance qualifier:(id<KMMSHAREDKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<KMMSHAREDKotlinKClass>> *)secondaryTypes allowOverride:(BOOL)allowOverride __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:allowOverride:)")));
- (void)deletePropertyKey:(NSString *)key __attribute__((swift_name("deleteProperty(key:)")));
- (void)deleteScopeScopeId:(NSString *)scopeId __attribute__((swift_name("deleteScope(scopeId:)")));
- (id _Nullable)getClazz:(id<KMMSHAREDKotlinKClass>)clazz qualifier:(id<KMMSHAREDKoin_coreQualifier> _Nullable)qualifier parameters:(KMMSHAREDKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (id)getQualifier:(id<KMMSHAREDKoin_coreQualifier> _Nullable)qualifier parameters:(KMMSHAREDKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (KMMSHAREDKoin_coreScope *)getOrCreateScopeScopeId:(NSString *)scopeId __attribute__((swift_name("getOrCreateScope(scopeId:)")));
- (KMMSHAREDKoin_coreScope *)getOrCreateScopeScopeId:(NSString *)scopeId qualifier:(id<KMMSHAREDKoin_coreQualifier>)qualifier source:(id _Nullable)source __attribute__((swift_name("getOrCreateScope(scopeId:qualifier:source:)")));
- (id _Nullable)getOrNullClazz:(id<KMMSHAREDKotlinKClass>)clazz qualifier:(id<KMMSHAREDKoin_coreQualifier> _Nullable)qualifier parameters:(KMMSHAREDKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(clazz:qualifier:parameters:)")));
- (id _Nullable)getOrNullQualifier:(id<KMMSHAREDKoin_coreQualifier> _Nullable)qualifier parameters:(KMMSHAREDKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (id)getPropertyKey:(NSString *)key defaultValue:(id)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (KMMSHAREDKoin_coreScope *)getScopeScopeId:(NSString *)scopeId __attribute__((swift_name("getScope(scopeId:)")));
- (KMMSHAREDKoin_coreScope * _Nullable)getScopeOrNullScopeId:(NSString *)scopeId __attribute__((swift_name("getScopeOrNull(scopeId:)")));
- (id<KMMSHAREDKotlinLazy>)injectQualifier:(id<KMMSHAREDKoin_coreQualifier> _Nullable)qualifier mode:(KMMSHAREDKotlinLazyThreadSafetyMode *)mode parameters:(KMMSHAREDKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:mode:parameters:)")));
- (id<KMMSHAREDKotlinLazy>)injectOrNullQualifier:(id<KMMSHAREDKoin_coreQualifier> _Nullable)qualifier mode:(KMMSHAREDKotlinLazyThreadSafetyMode *)mode parameters:(KMMSHAREDKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:mode:parameters:)")));
- (void)loadModulesModules:(NSArray<KMMSHAREDKoin_coreModule *> *)modules allowOverride:(BOOL)allowOverride __attribute__((swift_name("loadModules(modules:allowOverride:)")));
- (void)setPropertyKey:(NSString *)key value:(id)value __attribute__((swift_name("setProperty(key:value:)")));
- (void)setupLoggerLogger:(KMMSHAREDKoin_coreLogger *)logger __attribute__((swift_name("setupLogger(logger:)")));
- (void)unloadModulesModules:(NSArray<KMMSHAREDKoin_coreModule *> *)modules __attribute__((swift_name("unloadModules(modules:)")));
@property (readonly) KMMSHAREDKoin_coreInstanceRegistry *instanceRegistry __attribute__((swift_name("instanceRegistry")));
@property (readonly) KMMSHAREDKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) KMMSHAREDKoin_corePropertyRegistry *propertyRegistry __attribute__((swift_name("propertyRegistry")));
@property (readonly) KMMSHAREDKoin_coreScopeRegistry *scopeRegistry __attribute__((swift_name("scopeRegistry")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface KMMSHAREDKotlinThrowable : KMMSHAREDBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KMMSHAREDKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KMMSHAREDKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (KMMSHAREDKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KMMSHAREDKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface KMMSHAREDKotlinException : KMMSHAREDKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KMMSHAREDKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KMMSHAREDKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface KMMSHAREDKotlinRuntimeException : KMMSHAREDKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KMMSHAREDKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KMMSHAREDKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface KMMSHAREDKotlinIllegalStateException : KMMSHAREDKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KMMSHAREDKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KMMSHAREDKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface KMMSHAREDKotlinCancellationException : KMMSHAREDKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KMMSHAREDKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KMMSHAREDKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface KMMSHAREDKotlinUnit : KMMSHAREDBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMMSHAREDKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlin_clientPet")))
@interface KMMSHAREDKotlin_clientPet : KMMSHAREDBase
- (instancetype)initWithName:(NSString *)name photoUrls:(NSArray<NSString *> *)photoUrls id:(KMMSHAREDLong * _Nullable)id category:(KMMSHAREDKotlin_clientCategory * _Nullable)category tags:(NSArray<KMMSHAREDKotlin_clientTag *> * _Nullable)tags status:(KMMSHAREDKotlin_clientPetStatus * _Nullable)status __attribute__((swift_name("init(name:photoUrls:id:category:tags:status:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KMMSHAREDKotlin_clientPetCompanion *companion __attribute__((swift_name("companion")));
- (KMMSHAREDKotlin_clientPet *)doCopyName:(NSString *)name photoUrls:(NSArray<NSString *> *)photoUrls id:(KMMSHAREDLong * _Nullable)id category:(KMMSHAREDKotlin_clientCategory * _Nullable)category tags:(NSArray<KMMSHAREDKotlin_clientTag *> * _Nullable)tags status:(KMMSHAREDKotlin_clientPetStatus * _Nullable)status __attribute__((swift_name("doCopy(name:photoUrls:id:category:tags:status:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KMMSHAREDKotlin_clientCategory * _Nullable category __attribute__((swift_name("category")));
@property (readonly) KMMSHAREDLong * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSArray<NSString *> *photoUrls __attribute__((swift_name("photoUrls")));
@property (readonly) KMMSHAREDKotlin_clientPetStatus * _Nullable status __attribute__((swift_name("status"))) __attribute__((deprecated("This property is deprecated.")));
@property (readonly) NSArray<KMMSHAREDKotlin_clientTag *> * _Nullable tags __attribute__((swift_name("tags")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreModule")))
@interface KMMSHAREDKoin_coreModule : KMMSHAREDBase
- (instancetype)initWith_createdAtStart:(BOOL)_createdAtStart __attribute__((swift_name("init(_createdAtStart:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (KMMSHAREDKoin_coreKoinDefinition<id> *)factoryQualifier:(id<KMMSHAREDKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(KMMSHAREDKoin_coreScope *, KMMSHAREDKoin_coreParametersHolder *))definition __attribute__((swift_name("factory(qualifier:definition:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (void)includesModule:(KMMSHAREDKotlinArray<KMMSHAREDKoin_coreModule *> *)module __attribute__((swift_name("includes(module:)")));
- (void)includesModule_:(NSArray<KMMSHAREDKoin_coreModule *> *)module __attribute__((swift_name("includes(module_:)")));
- (void)indexPrimaryTypeInstanceFactory:(KMMSHAREDKoin_coreInstanceFactory<id> *)instanceFactory __attribute__((swift_name("indexPrimaryType(instanceFactory:)")));
- (void)indexSecondaryTypesInstanceFactory:(KMMSHAREDKoin_coreInstanceFactory<id> *)instanceFactory __attribute__((swift_name("indexSecondaryTypes(instanceFactory:)")));
- (NSArray<KMMSHAREDKoin_coreModule *> *)plusModules:(NSArray<KMMSHAREDKoin_coreModule *> *)modules __attribute__((swift_name("plus(modules:)")));
- (NSArray<KMMSHAREDKoin_coreModule *> *)plusModule:(KMMSHAREDKoin_coreModule *)module __attribute__((swift_name("plus(module:)")));
- (void)prepareForCreationAtStartInstanceFactory:(KMMSHAREDKoin_coreSingleInstanceFactory<id> *)instanceFactory __attribute__((swift_name("prepareForCreationAtStart(instanceFactory:)")));
- (void)scopeQualifier:(id<KMMSHAREDKoin_coreQualifier>)qualifier scopeSet:(void (^)(KMMSHAREDKoin_coreScopeDSL *))scopeSet __attribute__((swift_name("scope(qualifier:scopeSet:)")));
- (void)scopeScopeSet:(void (^)(KMMSHAREDKoin_coreScopeDSL *))scopeSet __attribute__((swift_name("scope(scopeSet:)")));
- (KMMSHAREDKoin_coreKoinDefinition<id> *)singleQualifier:(id<KMMSHAREDKoin_coreQualifier> _Nullable)qualifier createdAtStart:(BOOL)createdAtStart definition:(id _Nullable (^)(KMMSHAREDKoin_coreScope *, KMMSHAREDKoin_coreParametersHolder *))definition __attribute__((swift_name("single(qualifier:createdAtStart:definition:)")));
@property (readonly) KMMSHAREDMutableSet<KMMSHAREDKoin_coreSingleInstanceFactory<id> *> *eagerInstances __attribute__((swift_name("eagerInstances")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSMutableArray<KMMSHAREDKoin_coreModule *> *includedModules __attribute__((swift_name("includedModules")));
@property (readonly) BOOL isLoaded __attribute__((swift_name("isLoaded")));
@property (readonly) KMMSHAREDMutableDictionary<NSString *, KMMSHAREDKoin_coreInstanceFactory<id> *> *mappings __attribute__((swift_name("mappings")));
@end

__attribute__((swift_name("Koin_coreLockable")))
@interface KMMSHAREDKoin_coreLockable : KMMSHAREDBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScope")))
@interface KMMSHAREDKoin_coreScope : KMMSHAREDKoin_coreLockable
- (instancetype)initWithScopeQualifier:(id<KMMSHAREDKoin_coreQualifier>)scopeQualifier id:(NSString *)id isRoot:(BOOL)isRoot _koin:(KMMSHAREDKoin_coreKoin *)_koin __attribute__((swift_name("init(scopeQualifier:id:isRoot:_koin:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)close __attribute__((swift_name("close()")));
- (KMMSHAREDKoin_coreScope *)doCopyScopeQualifier:(id<KMMSHAREDKoin_coreQualifier>)scopeQualifier id:(NSString *)id isRoot:(BOOL)isRoot _koin:(KMMSHAREDKoin_coreKoin *)_koin __attribute__((swift_name("doCopy(scopeQualifier:id:isRoot:_koin:)")));
- (void)declareInstance:(id _Nullable)instance qualifier:(id<KMMSHAREDKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<KMMSHAREDKotlinKClass>> *)secondaryTypes allowOverride:(BOOL)allowOverride __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:allowOverride:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (id _Nullable)getClazz:(id<KMMSHAREDKotlinKClass>)clazz qualifier:(id<KMMSHAREDKoin_coreQualifier> _Nullable)qualifier parameters:(KMMSHAREDKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (id)getQualifier:(id<KMMSHAREDKoin_coreQualifier> _Nullable)qualifier parameters:(KMMSHAREDKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (NSArray<id> *)getAllClazz:(id<KMMSHAREDKotlinKClass>)clazz __attribute__((swift_name("getAll(clazz:)")));
- (KMMSHAREDKoin_coreKoin *)getKoin __attribute__((swift_name("getKoin()")));
- (id _Nullable)getOrNullClazz:(id<KMMSHAREDKotlinKClass>)clazz qualifier:(id<KMMSHAREDKoin_coreQualifier> _Nullable)qualifier parameters:(KMMSHAREDKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(clazz:qualifier:parameters:)")));
- (id _Nullable)getOrNullQualifier:(id<KMMSHAREDKoin_coreQualifier> _Nullable)qualifier parameters:(KMMSHAREDKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (id)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (id)getPropertyKey:(NSString *)key defaultValue:(id)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (id _Nullable)getPropertyOrNullKey:(NSString *)key __attribute__((swift_name("getPropertyOrNull(key:)")));
- (KMMSHAREDKoin_coreScope *)getScopeScopeID:(NSString *)scopeID __attribute__((swift_name("getScope(scopeID:)")));
- (id _Nullable)getSource __attribute__((swift_name("getSource()"))) __attribute__((deprecated("No need to use getSource(). You can an use get() directly.")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (id<KMMSHAREDKotlinLazy>)injectQualifier:(id<KMMSHAREDKoin_coreQualifier> _Nullable)qualifier mode:(KMMSHAREDKotlinLazyThreadSafetyMode *)mode parameters:(KMMSHAREDKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:mode:parameters:)")));
- (id<KMMSHAREDKotlinLazy>)injectOrNullQualifier:(id<KMMSHAREDKoin_coreQualifier> _Nullable)qualifier mode:(KMMSHAREDKotlinLazyThreadSafetyMode *)mode parameters:(KMMSHAREDKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:mode:parameters:)")));
- (BOOL)isNotClosed __attribute__((swift_name("isNotClosed()")));
- (void)linkToScopes:(KMMSHAREDKotlinArray<KMMSHAREDKoin_coreScope *> *)scopes __attribute__((swift_name("linkTo(scopes:)")));
- (void)registerCallbackCallback:(id<KMMSHAREDKoin_coreScopeCallback>)callback __attribute__((swift_name("registerCallback(callback:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (void)unlinkScopes:(KMMSHAREDKotlinArray<KMMSHAREDKoin_coreScope *> *)scopes __attribute__((swift_name("unlink(scopes:)")));
@property (readonly) NSMutableArray<KMMSHAREDKoin_coreParametersHolder *> *_parameterStack __attribute__((swift_name("_parameterStack")));
@property id _Nullable _source __attribute__((swift_name("_source")));
@property (readonly) BOOL closed __attribute__((swift_name("closed")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isRoot __attribute__((swift_name("isRoot")));
@property (readonly) KMMSHAREDKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) id<KMMSHAREDKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@end

__attribute__((swift_name("Koin_coreKoinScopeComponent")))
@protocol KMMSHAREDKoin_coreKoinScopeComponent <KMMSHAREDKoin_coreKoinComponent>
@required
- (void)closeScope __attribute__((swift_name("closeScope()")));
@property (readonly) KMMSHAREDKoin_coreScope *scope __attribute__((swift_name("scope")));
@end

__attribute__((swift_name("Koin_coreQualifier")))
@protocol KMMSHAREDKoin_coreQualifier
@required
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol KMMSHAREDKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol KMMSHAREDKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol KMMSHAREDKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol KMMSHAREDKotlinKClass <KMMSHAREDKotlinKDeclarationContainer, KMMSHAREDKotlinKAnnotatedElement, KMMSHAREDKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((swift_name("Koin_coreParametersHolder")))
@interface KMMSHAREDKoin_coreParametersHolder : KMMSHAREDBase
- (instancetype)initWith_values:(NSMutableArray<id> *)_values __attribute__((swift_name("init(_values:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KMMSHAREDKoin_coreParametersHolderCompanion *companion __attribute__((swift_name("companion")));
- (KMMSHAREDKoin_coreParametersHolder *)addValue:(id)value __attribute__((swift_name("add(value:)")));
- (id _Nullable)component1 __attribute__((swift_name("component1()")));
- (id _Nullable)component2 __attribute__((swift_name("component2()")));
- (id _Nullable)component3 __attribute__((swift_name("component3()")));
- (id _Nullable)component4 __attribute__((swift_name("component4()")));
- (id _Nullable)component5 __attribute__((swift_name("component5()")));
- (id _Nullable)elementAtI:(int32_t)i clazz:(id<KMMSHAREDKotlinKClass>)clazz __attribute__((swift_name("elementAt(i:clazz:)")));
- (id)get __attribute__((swift_name("get()")));
- (id _Nullable)getI:(int32_t)i __attribute__((swift_name("get(i:)")));
- (id _Nullable)getOrNull __attribute__((swift_name("getOrNull()")));
- (id _Nullable)getOrNullClazz:(id<KMMSHAREDKotlinKClass>)clazz __attribute__((swift_name("getOrNull(clazz:)")));
- (KMMSHAREDKoin_coreParametersHolder *)insertIndex:(int32_t)index value:(id)value __attribute__((swift_name("insert(index:value:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (BOOL)isNotEmpty __attribute__((swift_name("isNotEmpty()")));
- (void)setI:(int32_t)i t:(id _Nullable)t __attribute__((swift_name("set(i:t:)")));
- (int32_t)size __attribute__((swift_name("size()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<id> *values __attribute__((swift_name("values")));
@end

__attribute__((swift_name("KotlinLazy")))
@protocol KMMSHAREDKotlinLazy
@required
- (BOOL)isInitialized __attribute__((swift_name("isInitialized()")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol KMMSHAREDKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface KMMSHAREDKotlinEnum<E> : KMMSHAREDBase <KMMSHAREDKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KMMSHAREDKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLazyThreadSafetyMode")))
@interface KMMSHAREDKotlinLazyThreadSafetyMode : KMMSHAREDKotlinEnum<KMMSHAREDKotlinLazyThreadSafetyMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KMMSHAREDKotlinLazyThreadSafetyMode *synchronized __attribute__((swift_name("synchronized")));
@property (class, readonly) KMMSHAREDKotlinLazyThreadSafetyMode *publication __attribute__((swift_name("publication")));
@property (class, readonly) KMMSHAREDKotlinLazyThreadSafetyMode *none __attribute__((swift_name("none")));
+ (KMMSHAREDKotlinArray<KMMSHAREDKotlinLazyThreadSafetyMode *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((swift_name("Koin_coreLogger")))
@interface KMMSHAREDKoin_coreLogger : KMMSHAREDBase
- (instancetype)initWithLevel:(KMMSHAREDKoin_coreLevel *)level __attribute__((swift_name("init(level:)"))) __attribute__((objc_designated_initializer));
- (void)debugMsg:(NSString *)msg __attribute__((swift_name("debug(msg:)")));
- (void)displayLevel:(KMMSHAREDKoin_coreLevel *)level msg:(NSString *)msg __attribute__((swift_name("display(level:msg:)")));
- (void)errorMsg:(NSString *)msg __attribute__((swift_name("error(msg:)")));
- (void)infoMsg:(NSString *)msg __attribute__((swift_name("info(msg:)")));
- (BOOL)isAtLvl:(KMMSHAREDKoin_coreLevel *)lvl __attribute__((swift_name("isAt(lvl:)")));
- (void)logLvl:(KMMSHAREDKoin_coreLevel *)lvl msg:(NSString *(^)(void))msg __attribute__((swift_name("log(lvl:msg:)")));
- (void)logLvl:(KMMSHAREDKoin_coreLevel *)lvl msg_:(NSString *)msg __attribute__((swift_name("log(lvl:msg_:)")));
- (void)warnMsg:(NSString *)msg __attribute__((swift_name("warn(msg:)")));
@property KMMSHAREDKoin_coreLevel *level __attribute__((swift_name("level")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceRegistry")))
@interface KMMSHAREDKoin_coreInstanceRegistry : KMMSHAREDBase
- (instancetype)initWith_koin:(KMMSHAREDKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)saveMappingAllowOverride:(BOOL)allowOverride mapping:(NSString *)mapping factory:(KMMSHAREDKoin_coreInstanceFactory<id> *)factory logWarning:(BOOL)logWarning __attribute__((swift_name("saveMapping(allowOverride:mapping:factory:logWarning:)")));
- (int32_t)size __attribute__((swift_name("size()")));
@property (readonly) KMMSHAREDKoin_coreKoin *_koin __attribute__((swift_name("_koin")));
@property (readonly) NSDictionary<NSString *, KMMSHAREDKoin_coreInstanceFactory<id> *> *instances __attribute__((swift_name("instances")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_corePropertyRegistry")))
@interface KMMSHAREDKoin_corePropertyRegistry : KMMSHAREDBase
- (instancetype)initWith_koin:(KMMSHAREDKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (void)deletePropertyKey:(NSString *)key __attribute__((swift_name("deleteProperty(key:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (void)savePropertiesProperties:(NSDictionary<NSString *, id> *)properties __attribute__((swift_name("saveProperties(properties:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeRegistry")))
@interface KMMSHAREDKoin_coreScopeRegistry : KMMSHAREDBase
- (instancetype)initWith_koin:(KMMSHAREDKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KMMSHAREDKoin_coreScopeRegistryCompanion *companion __attribute__((swift_name("companion")));
- (void)loadScopesModules:(NSSet<KMMSHAREDKoin_coreModule *> *)modules __attribute__((swift_name("loadScopes(modules:)")));
@property (readonly) KMMSHAREDKoin_coreScope *rootScope __attribute__((swift_name("rootScope")));
@property (readonly) NSSet<id<KMMSHAREDKoin_coreQualifier>> *scopeDefinitions __attribute__((swift_name("scopeDefinitions")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface KMMSHAREDKotlinArray<T> : KMMSHAREDBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(KMMSHAREDInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<KMMSHAREDKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlin_clientCategory")))
@interface KMMSHAREDKotlin_clientCategory : KMMSHAREDBase
- (instancetype)initWithId:(KMMSHAREDLong * _Nullable)id name:(NSString * _Nullable)name __attribute__((swift_name("init(id:name:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KMMSHAREDKotlin_clientCategoryCompanion *companion __attribute__((swift_name("companion")));
- (KMMSHAREDKotlin_clientCategory *)doCopyId:(KMMSHAREDLong * _Nullable)id name:(NSString * _Nullable)name __attribute__((swift_name("doCopy(id:name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KMMSHAREDLong * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlin_clientTag")))
@interface KMMSHAREDKotlin_clientTag : KMMSHAREDBase
- (instancetype)initWithId:(KMMSHAREDLong * _Nullable)id name:(NSString * _Nullable)name __attribute__((swift_name("init(id:name:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KMMSHAREDKotlin_clientTagCompanion *companion __attribute__((swift_name("companion")));
- (KMMSHAREDKotlin_clientTag *)doCopyId:(KMMSHAREDLong * _Nullable)id name:(NSString * _Nullable)name __attribute__((swift_name("doCopy(id:name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KMMSHAREDLong * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlin_clientPet.Status")))
@interface KMMSHAREDKotlin_clientPetStatus : KMMSHAREDKotlinEnum<KMMSHAREDKotlin_clientPetStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KMMSHAREDKotlin_clientPetStatusCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) KMMSHAREDKotlin_clientPetStatus *available __attribute__((swift_name("available")));
@property (class, readonly) KMMSHAREDKotlin_clientPetStatus *pending __attribute__((swift_name("pending")));
@property (class, readonly) KMMSHAREDKotlin_clientPetStatus *sold __attribute__((swift_name("sold")));
+ (KMMSHAREDKotlinArray<KMMSHAREDKotlin_clientPetStatus *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlin_clientPet.Companion")))
@interface KMMSHAREDKotlin_clientPetCompanion : KMMSHAREDBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMMSHAREDKotlin_clientPetCompanion *shared __attribute__((swift_name("shared")));
- (id<KMMSHAREDKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoinDefinition")))
@interface KMMSHAREDKoin_coreKoinDefinition<R> : KMMSHAREDBase
- (instancetype)initWithModule:(KMMSHAREDKoin_coreModule *)module factory:(KMMSHAREDKoin_coreInstanceFactory<R> *)factory __attribute__((swift_name("init(module:factory:)"))) __attribute__((objc_designated_initializer));
- (KMMSHAREDKoin_coreKoinDefinition<R> *)doCopyModule:(KMMSHAREDKoin_coreModule *)module factory:(KMMSHAREDKoin_coreInstanceFactory<R> *)factory __attribute__((swift_name("doCopy(module:factory:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KMMSHAREDKoin_coreInstanceFactory<R> *factory __attribute__((swift_name("factory")));
@property (readonly) KMMSHAREDKoin_coreModule *module __attribute__((swift_name("module")));
@end

__attribute__((swift_name("Koin_coreInstanceFactory")))
@interface KMMSHAREDKoin_coreInstanceFactory<T> : KMMSHAREDKoin_coreLockable
- (instancetype)initWithBeanDefinition:(KMMSHAREDKoin_coreBeanDefinition<T> *)beanDefinition __attribute__((swift_name("init(beanDefinition:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) KMMSHAREDKoin_coreInstanceFactoryCompanion *companion __attribute__((swift_name("companion")));
- (T _Nullable)createContext:(KMMSHAREDKoin_coreInstanceContext *)context __attribute__((swift_name("create(context:)")));
- (void)dropScope:(KMMSHAREDKoin_coreScope * _Nullable)scope __attribute__((swift_name("drop(scope:)")));
- (void)dropAll __attribute__((swift_name("dropAll()")));
- (T _Nullable)getContext:(KMMSHAREDKoin_coreInstanceContext *)context __attribute__((swift_name("get(context:)")));
- (BOOL)isCreatedContext:(KMMSHAREDKoin_coreInstanceContext * _Nullable)context __attribute__((swift_name("isCreated(context:)")));
@property (readonly) KMMSHAREDKoin_coreBeanDefinition<T> *beanDefinition __attribute__((swift_name("beanDefinition")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreSingleInstanceFactory")))
@interface KMMSHAREDKoin_coreSingleInstanceFactory<T> : KMMSHAREDKoin_coreInstanceFactory<T>
- (instancetype)initWithBeanDefinition:(KMMSHAREDKoin_coreBeanDefinition<T> *)beanDefinition __attribute__((swift_name("init(beanDefinition:)"))) __attribute__((objc_designated_initializer));
- (T _Nullable)createContext:(KMMSHAREDKoin_coreInstanceContext *)context __attribute__((swift_name("create(context:)")));
- (void)dropScope:(KMMSHAREDKoin_coreScope * _Nullable)scope __attribute__((swift_name("drop(scope:)")));
- (void)dropAll __attribute__((swift_name("dropAll()")));
- (T _Nullable)getContext:(KMMSHAREDKoin_coreInstanceContext *)context __attribute__((swift_name("get(context:)")));
- (BOOL)isCreatedContext:(KMMSHAREDKoin_coreInstanceContext * _Nullable)context __attribute__((swift_name("isCreated(context:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeDSL")))
@interface KMMSHAREDKoin_coreScopeDSL : KMMSHAREDBase
- (instancetype)initWithScopeQualifier:(id<KMMSHAREDKoin_coreQualifier>)scopeQualifier module:(KMMSHAREDKoin_coreModule *)module __attribute__((swift_name("init(scopeQualifier:module:)"))) __attribute__((objc_designated_initializer));
- (KMMSHAREDKoin_coreKoinDefinition<id> *)factoryQualifier:(id<KMMSHAREDKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(KMMSHAREDKoin_coreScope *, KMMSHAREDKoin_coreParametersHolder *))definition __attribute__((swift_name("factory(qualifier:definition:)")));
- (KMMSHAREDKoin_coreKoinDefinition<id> *)scopedQualifier:(id<KMMSHAREDKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(KMMSHAREDKoin_coreScope *, KMMSHAREDKoin_coreParametersHolder *))definition __attribute__((swift_name("scoped(qualifier:definition:)")));
@property (readonly) KMMSHAREDKoin_coreModule *module __attribute__((swift_name("module")));
@property (readonly) id<KMMSHAREDKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@end

__attribute__((swift_name("Koin_coreScopeCallback")))
@protocol KMMSHAREDKoin_coreScopeCallback
@required
- (void)onScopeCloseScope:(KMMSHAREDKoin_coreScope *)scope __attribute__((swift_name("onScopeClose(scope:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreParametersHolder.Companion")))
@interface KMMSHAREDKoin_coreParametersHolderCompanion : KMMSHAREDBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMMSHAREDKoin_coreParametersHolderCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t MAX_PARAMS __attribute__((swift_name("MAX_PARAMS")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface KMMSHAREDKotlinEnumCompanion : KMMSHAREDBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMMSHAREDKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreLevel")))
@interface KMMSHAREDKoin_coreLevel : KMMSHAREDKotlinEnum<KMMSHAREDKoin_coreLevel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KMMSHAREDKoin_coreLevel *debug __attribute__((swift_name("debug")));
@property (class, readonly) KMMSHAREDKoin_coreLevel *info __attribute__((swift_name("info")));
@property (class, readonly) KMMSHAREDKoin_coreLevel *warning __attribute__((swift_name("warning")));
@property (class, readonly) KMMSHAREDKoin_coreLevel *error __attribute__((swift_name("error")));
@property (class, readonly) KMMSHAREDKoin_coreLevel *none __attribute__((swift_name("none")));
+ (KMMSHAREDKotlinArray<KMMSHAREDKoin_coreLevel *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeRegistry.Companion")))
@interface KMMSHAREDKoin_coreScopeRegistryCompanion : KMMSHAREDBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMMSHAREDKoin_coreScopeRegistryCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol KMMSHAREDKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlin_clientCategory.Companion")))
@interface KMMSHAREDKotlin_clientCategoryCompanion : KMMSHAREDBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMMSHAREDKotlin_clientCategoryCompanion *shared __attribute__((swift_name("shared")));
- (id<KMMSHAREDKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlin_clientTag.Companion")))
@interface KMMSHAREDKotlin_clientTagCompanion : KMMSHAREDBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMMSHAREDKotlin_clientTagCompanion *shared __attribute__((swift_name("shared")));
- (id<KMMSHAREDKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlin_clientPet.StatusCompanion")))
@interface KMMSHAREDKotlin_clientPetStatusCompanion : KMMSHAREDBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMMSHAREDKotlin_clientPetStatusCompanion *shared __attribute__((swift_name("shared")));
- (id<KMMSHAREDKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<KMMSHAREDKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(KMMSHAREDKotlinArray<id<KMMSHAREDKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol KMMSHAREDKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<KMMSHAREDKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<KMMSHAREDKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol KMMSHAREDKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<KMMSHAREDKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<KMMSHAREDKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol KMMSHAREDKotlinx_serialization_coreKSerializer <KMMSHAREDKotlinx_serialization_coreSerializationStrategy, KMMSHAREDKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreBeanDefinition")))
@interface KMMSHAREDKoin_coreBeanDefinition<T> : KMMSHAREDBase
- (instancetype)initWithScopeQualifier:(id<KMMSHAREDKoin_coreQualifier>)scopeQualifier primaryType:(id<KMMSHAREDKotlinKClass>)primaryType qualifier:(id<KMMSHAREDKoin_coreQualifier> _Nullable)qualifier definition:(T _Nullable (^)(KMMSHAREDKoin_coreScope *, KMMSHAREDKoin_coreParametersHolder *))definition kind:(KMMSHAREDKoin_coreKind *)kind secondaryTypes:(NSArray<id<KMMSHAREDKotlinKClass>> *)secondaryTypes __attribute__((swift_name("init(scopeQualifier:primaryType:qualifier:definition:kind:secondaryTypes:)"))) __attribute__((objc_designated_initializer));
- (KMMSHAREDKoin_coreBeanDefinition<T> *)doCopyScopeQualifier:(id<KMMSHAREDKoin_coreQualifier>)scopeQualifier primaryType:(id<KMMSHAREDKotlinKClass>)primaryType qualifier:(id<KMMSHAREDKoin_coreQualifier> _Nullable)qualifier definition:(T _Nullable (^)(KMMSHAREDKoin_coreScope *, KMMSHAREDKoin_coreParametersHolder *))definition kind:(KMMSHAREDKoin_coreKind *)kind secondaryTypes:(NSArray<id<KMMSHAREDKotlinKClass>> *)secondaryTypes __attribute__((swift_name("doCopy(scopeQualifier:primaryType:qualifier:definition:kind:secondaryTypes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (BOOL)hasTypeClazz:(id<KMMSHAREDKotlinKClass>)clazz __attribute__((swift_name("hasType(clazz:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isClazz:(id<KMMSHAREDKotlinKClass>)clazz qualifier:(id<KMMSHAREDKoin_coreQualifier> _Nullable)qualifier scopeDefinition:(id<KMMSHAREDKoin_coreQualifier>)scopeDefinition __attribute__((swift_name("is(clazz:qualifier:scopeDefinition:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property KMMSHAREDKoin_coreCallbacks<T> *callbacks __attribute__((swift_name("callbacks")));
@property (readonly) T _Nullable (^definition)(KMMSHAREDKoin_coreScope *, KMMSHAREDKoin_coreParametersHolder *) __attribute__((swift_name("definition")));
@property (readonly) KMMSHAREDKoin_coreKind *kind __attribute__((swift_name("kind")));
@property (readonly) id<KMMSHAREDKotlinKClass> primaryType __attribute__((swift_name("primaryType")));
@property id<KMMSHAREDKoin_coreQualifier> _Nullable qualifier __attribute__((swift_name("qualifier")));
@property (readonly) id<KMMSHAREDKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@property NSArray<id<KMMSHAREDKotlinKClass>> *secondaryTypes __attribute__((swift_name("secondaryTypes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceFactoryCompanion")))
@interface KMMSHAREDKoin_coreInstanceFactoryCompanion : KMMSHAREDBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KMMSHAREDKoin_coreInstanceFactoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *ERROR_SEPARATOR __attribute__((swift_name("ERROR_SEPARATOR")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceContext")))
@interface KMMSHAREDKoin_coreInstanceContext : KMMSHAREDBase
- (instancetype)initWithKoin:(KMMSHAREDKoin_coreKoin *)koin scope:(KMMSHAREDKoin_coreScope *)scope parameters:(KMMSHAREDKoin_coreParametersHolder * _Nullable)parameters __attribute__((swift_name("init(koin:scope:parameters:)"))) __attribute__((objc_designated_initializer));
@property (readonly) KMMSHAREDKoin_coreKoin *koin __attribute__((swift_name("koin")));
@property (readonly) KMMSHAREDKoin_coreParametersHolder * _Nullable parameters __attribute__((swift_name("parameters")));
@property (readonly) KMMSHAREDKoin_coreScope *scope __attribute__((swift_name("scope")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol KMMSHAREDKotlinx_serialization_coreEncoder
@required
- (id<KMMSHAREDKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<KMMSHAREDKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<KMMSHAREDKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<KMMSHAREDKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<KMMSHAREDKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<KMMSHAREDKotlinx_serialization_coreEncoder>)encodeInlineInlineDescriptor:(id<KMMSHAREDKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("encodeInline(inlineDescriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<KMMSHAREDKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<KMMSHAREDKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) KMMSHAREDKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol KMMSHAREDKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<KMMSHAREDKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<KMMSHAREDKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<KMMSHAREDKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) KMMSHAREDKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol KMMSHAREDKotlinx_serialization_coreDecoder
@required
- (id<KMMSHAREDKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<KMMSHAREDKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<KMMSHAREDKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<KMMSHAREDKotlinx_serialization_coreDecoder>)decodeInlineInlineDescriptor:(id<KMMSHAREDKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("decodeInline(inlineDescriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (KMMSHAREDKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<KMMSHAREDKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<KMMSHAREDKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) KMMSHAREDKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKind")))
@interface KMMSHAREDKoin_coreKind : KMMSHAREDKotlinEnum<KMMSHAREDKoin_coreKind *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KMMSHAREDKoin_coreKind *singleton __attribute__((swift_name("singleton")));
@property (class, readonly) KMMSHAREDKoin_coreKind *factory __attribute__((swift_name("factory")));
@property (class, readonly) KMMSHAREDKoin_coreKind *scoped __attribute__((swift_name("scoped")));
+ (KMMSHAREDKotlinArray<KMMSHAREDKoin_coreKind *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreCallbacks")))
@interface KMMSHAREDKoin_coreCallbacks<T> : KMMSHAREDBase
- (instancetype)initWithOnClose:(void (^ _Nullable)(T _Nullable))onClose __attribute__((swift_name("init(onClose:)"))) __attribute__((objc_designated_initializer));
- (KMMSHAREDKoin_coreCallbacks<T> *)doCopyOnClose:(void (^ _Nullable)(T _Nullable))onClose __attribute__((swift_name("doCopy(onClose:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) void (^ _Nullable onClose)(T _Nullable) __attribute__((swift_name("onClose")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol KMMSHAREDKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<KMMSHAREDKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<KMMSHAREDKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<KMMSHAREDKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<KMMSHAREDKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<KMMSHAREDKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<KMMSHAREDKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<KMMSHAREDKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<KMMSHAREDKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<KMMSHAREDKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<KMMSHAREDKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<KMMSHAREDKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<KMMSHAREDKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<KMMSHAREDKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<KMMSHAREDKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<KMMSHAREDKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<KMMSHAREDKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<KMMSHAREDKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) KMMSHAREDKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface KMMSHAREDKotlinx_serialization_coreSerializersModule : KMMSHAREDBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<KMMSHAREDKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<KMMSHAREDKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<KMMSHAREDKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<KMMSHAREDKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<KMMSHAREDKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<KMMSHAREDKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<KMMSHAREDKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<KMMSHAREDKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol KMMSHAREDKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface KMMSHAREDKotlinx_serialization_coreSerialKind : KMMSHAREDBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol KMMSHAREDKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<KMMSHAREDKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<KMMSHAREDKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<KMMSHAREDKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<KMMSHAREDKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<KMMSHAREDKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<KMMSHAREDKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<KMMSHAREDKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<KMMSHAREDKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<KMMSHAREDKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<KMMSHAREDKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<KMMSHAREDKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<KMMSHAREDKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<KMMSHAREDKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<KMMSHAREDKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<KMMSHAREDKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<KMMSHAREDKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<KMMSHAREDKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<KMMSHAREDKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) KMMSHAREDKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface KMMSHAREDKotlinNothing : KMMSHAREDBase
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol KMMSHAREDKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<KMMSHAREDKotlinKClass>)kClass provider:(id<KMMSHAREDKotlinx_serialization_coreKSerializer> (^)(NSArray<id<KMMSHAREDKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<KMMSHAREDKotlinKClass>)kClass serializer:(id<KMMSHAREDKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<KMMSHAREDKotlinKClass>)baseClass actualClass:(id<KMMSHAREDKotlinKClass>)actualClass actualSerializer:(id<KMMSHAREDKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<KMMSHAREDKotlinKClass>)baseClass defaultDeserializerProvider:(id<KMMSHAREDKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)polymorphicDefaultDeserializerBaseClass:(id<KMMSHAREDKotlinKClass>)baseClass defaultDeserializerProvider:(id<KMMSHAREDKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)polymorphicDefaultSerializerBaseClass:(id<KMMSHAREDKotlinKClass>)baseClass defaultSerializerProvider:(id<KMMSHAREDKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
