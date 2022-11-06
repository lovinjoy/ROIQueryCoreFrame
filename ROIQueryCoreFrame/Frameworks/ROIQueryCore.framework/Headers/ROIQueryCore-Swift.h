#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.7 (swiftlang-5.7.0.127.4 clang-1400.0.29.50)
#ifndef ROIQUERYCORE_SWIFT_H
#define ROIQUERYCORE_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wduplicate-method-match"
#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT noexcept
#endif
#else
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT 
#endif
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_CXX_INT_DEFINED)
#define SWIFT_CXX_INT_DEFINED
namespace swift {
using Int = ptrdiff_t;
using UInt = size_t;
}
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="ROIQueryCore",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)
typedef SWIFT_ENUM(NSInteger, AdMediation, closed) {
  AdMediationIDLE = -1,
  AdMediationMOPUB = 0,
  AdMediationMAX = 1,
  AdMediationHISAVANA = 2,
  AdMediationCOMBO = 3,
};

typedef SWIFT_ENUM(NSInteger, AdPlatform, closed) {
  AdPlatformUNDISCLOSED = -2,
  AdPlatformIDLE = -1,
  AdPlatformADMOB = 0,
  AdPlatformMOPUB = 1,
  AdPlatformADCOLONY = 2,
  AdPlatformAPPLOVIN = 3,
  AdPlatformCHARTBOOST = 4,
  AdPlatformFACEBOOK = 5,
  AdPlatformINMOBI = 6,
  AdPlatformIRONSOURCE = 7,
  AdPlatformPANGLE = 8,
  AdPlatformSNAP_AUDIENCE_NETWORK = 9,
  AdPlatformTAPJOY = 10,
  AdPlatformUNITY_ADS = 11,
  AdPlatformVERIZON_MEDIA = 12,
  AdPlatformVUNGLE = 13,
  AdPlatformADX = 14,
  AdPlatformCOMBO = 15,
  AdPlatformBIGO = 16,
  AdPlatformHISAVANA = 17,
  AdPlatformAPPLOVIN_EXCHANGE = 18,
  AdPlatformLOVINJOYADS = 33,
};

typedef SWIFT_ENUM(NSInteger, AdType, closed) {
  AdTypeIDLE = -1,
  AdTypeBANNER = 0,
  AdTypeINTERSTITIAL = 1,
  AdTypeNATIVE = 2,
  AdTypeREWARDED = 3,
  AdTypeREWARDED_INTERSTITIAL = 4,
  AdTypeAPP_OPEN = 5,
  AdTypeMREC = 6,
};


SWIFT_CLASS("_TtC12ROIQueryCore18AppStateDisposeBag")
@interface AppStateDisposeBag : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSInteger, Code, closed) {
  CodeCODE_INIT_DB_ERROR = 2007,
  CodeCODE_INSERT_DB_NORMAL_ERROR = 2003,
  CodeCODE_UPDATE_DB_EXCEPTION = 2008,
  CodeCODE_QUERY_DB_ERROR = 2009,
  CodeCODE_QUERY_DB_EXCEPTION = 2010,
};

@class NSString;
enum DTChannel : NSInteger;
enum LogDegree : NSInteger;

SWIFT_CLASS("_TtC12ROIQueryCore2DT")
@interface DT : NSObject
/// 初始化
/// \param appid 应用id，后台分配
///
/// \param channel 渠道，可用 ROIQueryChannel.APPSTORE 
///
/// \param isDebug 是否为调试模式，可以打印日志
///
/// \param logLevel 打印日志的级别
///
+ (void)initSDKWithAppid:(NSString * _Nonnull)appid channel:(enum DTChannel)channel isDebug:(BOOL)isDebug logLevel:(enum LogDegree)logLevel commonProperties:(NSDictionary<NSString *, id> * _Nullable)commonProperties SWIFT_METHOD_FAMILY(none);
/// 初始化
/// \param appid 应用id，后台分配
///
/// \param channel 渠道，可用 ROIQueryChannel.APPSTORE 
///
/// \param isDebug 是否为调试模式，可以打印日志
///
/// \param logLevel 打印日志的级别
///
+ (void)initSDKWithAppid:(NSString * _Nonnull)appid channel:(enum DTChannel)channel isDebug:(BOOL)isDebug logLevel:(enum LogDegree)logLevel SWIFT_METHOD_FAMILY(none);
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC12ROIQueryCore10DTAdReport")
@interface DTAdReport : NSObject
/// 上报 广告开始加载
/// @param id 广告最小单元id
/// @param type 广告类型
/// @param platform 广告平台
/// @param seq 系列行为标识
/// @param properties 自定义属性
+ (void)reportLoadBeginWithId:(NSString * _Nonnull)id type:(enum AdType)type platform:(enum AdPlatform)platform seq:(NSString * _Nonnull)seq properties:(NSDictionary<NSString *, id> * _Nullable)properties;
/// 上报 广告结束加载
/// @param id 广告最小单元id
/// @param type 广告类型
/// @param platform 广告平台
/// @param seq 系列行为标识
/// @param properties 自定义属性
+ (void)reportLoadEndWithId:(NSString * _Nonnull)id type:(enum AdType)type platform:(enum AdPlatform)platform duration:(int64_t)duration result:(BOOL)result seq:(NSString * _Nonnull)seq errorCode:(NSInteger)errorCode errorMessage:(NSString * _Nonnull)errorMessage properties:(NSDictionary<NSString *, id> * _Nullable)properties;
/// 上报 广告展示请求
/// @param id 广告最小单元id
/// @param type 广告类型
/// @param platform 广告平台
/// @param location 广告位
/// @param seq 系列行为标识
/// @param seq 系列行为标识
/// @param properties 自定义属性
/// @param entrance 广告入口
+ (void)reportToShowWithId:(NSString * _Nonnull)id type:(enum AdType)type platform:(enum AdPlatform)platform location:(NSString * _Nonnull)location seq:(NSString * _Nonnull)seq properties:(NSDictionary<NSString *, id> * _Nullable)properties entrance:(NSString * _Nullable)entrance;
/// 上报 广告展示
/// @param id 广告最小单元id
/// @param type 广告类型
/// @param platform 广告平台
/// @param location 广告位
/// @param seq 系列行为标识
/// @param properties 自定义属性
/// @param entrance 广告入口
+ (void)reportShowWithId:(NSString * _Nonnull)id type:(enum AdType)type platform:(enum AdPlatform)platform location:(NSString * _Nonnull)location seq:(NSString * _Nonnull)seq properties:(NSDictionary<NSString *, id> * _Nullable)properties entrance:(NSString * _Nullable)entrance;
/// 上报 广告点击
/// @param id 广告最小单元id
/// @param type 广告类型
/// @param platform 广告平台
/// @param location 广告位
/// @param seq 系列行为标识
/// @param properties 自定义属性
/// @param entrance 广告入口
+ (void)reportClickWithId:(NSString * _Nonnull)id type:(enum AdType)type platform:(enum AdPlatform)platform location:(NSString * _Nonnull)location seq:(NSString * _Nonnull)seq properties:(NSDictionary<NSString *, id> * _Nullable)properties entrance:(NSString * _Nullable)entrance;
+ (void)reportAdShowFailWithId:(NSString * _Nonnull)id type:(enum AdType)type platform:(enum AdPlatform)platform location:(NSString * _Nonnull)location seq:(NSString * _Nonnull)seq errorCode:(NSInteger)errorCode errorMessage:(NSString * _Nonnull)errorMessage properties:(NSDictionary<NSString *, id> * _Nullable)properties entrance:(NSString * _Nullable)entrance;
/// 上报 激励广告已获得奖励
/// @param id 广告最小单元id
/// @param type 广告类型
/// @param platform 广告平台
/// @param location 广告位
/// @param seq 系列行为标识
/// @param properties 自定义属性
/// @param entrance 广告入口
+ (void)reportRewardedWithId:(NSString * _Nonnull)id type:(enum AdType)type platform:(enum AdPlatform)platform location:(NSString * _Nonnull)location seq:(NSString * _Nonnull)seq properties:(NSDictionary<NSString *, id> * _Nullable)properties entrance:(NSString * _Nullable)entrance;
/// 上报 自定义转化，通过点击
/// @param id 广告最小单元id
/// @param type 广告类型
/// @param platform 广告平台
/// @param location 广告位
/// @param seq 系列行为标识
/// @param properties 自定义属性
/// @param entrance 广告入口
+ (void)reportConversionByClickWithId:(NSString * _Nonnull)id type:(enum AdType)type platform:(enum AdPlatform)platform location:(NSString * _Nonnull)location seq:(NSString * _Nonnull)seq properties:(NSDictionary<NSString *, id> * _Nullable)properties entrance:(NSString * _Nullable)entrance;
/// 上报 自定义转化，通过跳出app
/// @param id 广告最小单元id
/// @param type 广告类型
/// @param platform 广告平台
/// @param location 广告位
/// @param seq 系列行为标识
/// @param properties 自定义属性
/// @param entrance 广告入口
+ (void)reportConversionByLeftAppWithId:(NSString * _Nonnull)id type:(enum AdType)type platform:(enum AdPlatform)platform location:(NSString * _Nonnull)location seq:(NSString * _Nonnull)seq properties:(NSDictionary<NSString *, id> * _Nullable)properties entrance:(NSString * _Nullable)entrance;
/// 上报 自定义转化事件，通过获得激励
/// @param id 广告最小单元id
/// @param type 广告类型
/// @param platform 广告平台
/// @param location 广告位
/// @param seq 系列行为标识
/// @param properties 自定义属性
/// @param entrance 广告入口
+ (void)reportConversionByRewardedWithId:(NSString * _Nonnull)id type:(enum AdType)type platform:(enum AdPlatform)platform location:(NSString * _Nonnull)location seq:(NSString * _Nonnull)seq properties:(NSDictionary<NSString *, id> * _Nullable)properties entrance:(NSString * _Nullable)entrance;
/// 上报 广告关闭
/// @param id 广告最小单元id
/// @param type 广告类型
/// @param platform 广告平台
/// @param location 广告位
/// @param seq 系列行为标识
/// @param properties 自定义属性
/// @param entrance 广告入口
+ (void)reportCloseWithId:(NSString * _Nonnull)id type:(enum AdType)type platform:(enum AdPlatform)platform location:(NSString * _Nonnull)location seq:(NSString * _Nonnull)seq properties:(NSDictionary<NSString *, id> * _Nullable)properties entrance:(NSString * _Nullable)entrance;
/// 上报 广告展示价值 (单独广告平台)
/// @param id 广告最小单元id
/// @param type 广告类型
/// @param platform 广告平台
/// @param location 广告位
/// @param seq 系列行为标识
/// @param value 价值
/// @param currency 货币
/// @param precision 精确度
/// @param properties 自定义属性
/// @param entrance 广告入口
+ (void)reportPaidWithId:(NSString * _Nonnull)id type:(enum AdType)type platform:(enum AdPlatform)platform location:(NSString * _Nonnull)location seq:(NSString * _Nonnull)seq value:(NSString * _Nonnull)value currency:(NSString * _Nonnull)currency precision:(NSString * _Nonnull)precision properties:(NSDictionary<NSString *, id> * _Nullable)properties entrance:(NSString * _Nullable)entrance;
/// 上报 广告展示价值（聚合广告平台）
/// @param id 广告最小单元id
/// @param type 广告类型
/// @param platform 广告平台
/// @param adgroupType 广告组类别
/// @param location 广告位
/// @param seq 系列行为标识
/// @param mediation 聚合平台
/// @param mediationId 聚合平台广告id
/// @param value 价值
/// @param currency 货币
/// @param precision 精确度
/// @param country 国家
/// @param properties 自定义属性
/// @param entrance 广告入口
+ (void)reportPaidWithId:(NSString * _Nonnull)id type:(enum AdType)type platform:(NSString * _Nonnull)platform adgroupType:(NSString * _Nonnull)adgroupType location:(NSString * _Nonnull)location seq:(NSString * _Nonnull)seq mediation:(enum AdMediation)mediation mediationId:(NSString * _Nonnull)mediationId value:(NSString * _Nonnull)value currency:(NSString * _Nonnull)currency precision:(NSString * _Nonnull)precision country:(NSString * _Nonnull)country properties:(NSDictionary<NSString *, id> * _Nullable)properties entrance:(NSString * _Nullable)entrance;
/// 上报 访问广告链接，离开当前app(页面)
/// @param id 广告最小单元id
/// @param type 广告类型
/// @param platform 广告平台
/// @param location 广告位
/// @param seq 系列行为标识
/// @param properties 自定义属性
/// @param entrance 广告入口
+ (void)reportLeftAppWithId:(NSString * _Nonnull)id type:(enum AdType)type platform:(enum AdPlatform)platform location:(NSString * _Nonnull)location seq:(NSString * _Nonnull)seq properties:(NSDictionary<NSString *, id> * _Nullable)properties entrance:(NSString * _Nullable)entrance;
/// 生成UUID
+ (NSString * _Nonnull)generateUUID SWIFT_WARN_UNUSED_RESULT;
/// 获取聚合平台具体广告网络的广告平台
///
/// returns:
/// 广告平台
+ (enum AdPlatform)getPlatformWithMediation:(NSInteger)mediation networkName:(NSString * _Nonnull)networkName networkPlacementId:(NSString * _Nonnull)networkPlacementId adgroupType:(NSString * _Nonnull)adgroupType SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC12ROIQueryCore11DTAnalytics")
@interface DTAnalytics : NSObject
/// 获取DataTower ID
///
/// returns:
/// String value for ROIQuery ID
+ (NSString * _Nonnull)getDataTowerId SWIFT_WARN_UNUSED_RESULT;
/// 调用 track 接口，记录一个带有属性的事件
/// \param eventName 事件的名称
///
/// \param properties 事件属性，可为空
///
+ (void)trackWithEventName:(NSString * _Nonnull)eventName properties:(NSDictionary<NSString *, id> * _Nullable)properties;
/// 设置自有用户系统的id
/// \param accountId 用户系统id
///
+ (void)setAccountIdWithAccountId:(NSString * _Nonnull)accountId;
/// 设置Firebase的app_instance_id
/// \param fiid Firebase 的 app_instance_id
///
+ (void)setFirebaseAppInstanceIDWithFiid:(NSString * _Nonnull)fiid;
/// 设置AppsFlyer的appsflyer_id
/// \param afuid AppsFlyer的appsflyer_id
///
+ (void)setAppsFlyerIDWithAfuid:(NSString * _Nonnull)afuid;
/// 设置kochava iid
/// \param afuid AppsFlyer的appsflyer_id
///
+ (void)setKochavaIDWithKoid:(NSString * _Nonnull)koid;
/// 设置一般的用户属性
/// \param properties 属性
///
+ (void)userSetWithProperties:(NSDictionary<NSString *, id> * _Nonnull)properties;
/// 设置只要设置一次的用户属性
/// \param properties 属性
///
+ (void)userSetOnceWithProperties:(NSDictionary<NSString *, id> * _Nonnull)properties;
/// 对 JSONArray 类型的用户属性进行属性累加
/// \param properties 属性
///
+ (void)userAppendWithProperties:(NSDictionary<NSString *, id> * _Nonnull)properties;
/// 设置可累加的用户属性
/// \param properties 属性
///
+ (void)userAddWithProperties:(NSDictionary<NSString *, id> * _Nonnull)properties;
/// 删除用户
+ (void)userDelete;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC12ROIQueryCore16DTAnalyticsUtils")
@interface DTAnalyticsUtils : NSObject
/// 初始化事件的计时器，计时单位为毫秒。
/// \param eventName 事件的名称
///
+ (void)trackTimerStartWithEventName:(NSString * _Nonnull)eventName;
/// 暂停事件的计时器，计时单位为毫秒。
/// \param eventName 事件的名称
///
+ (void)trackTimerPauseWithEventName:(NSString * _Nonnull)eventName;
/// 恢复事件的计时器，计时单位为毫秒。
/// \param eventName 事件的名称
///
+ (void)trackTimerResumeWithEventName:(NSString * _Nonnull)eventName;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

/// log等级
typedef SWIFT_ENUM(NSInteger, DTChannel, closed) {
  DTChannelDEFALUT = 0,
  DTChannelGP = 1,
  DTChannelAPPSTORE = 2,
};


SWIFT_CLASS("_TtC12ROIQueryCore11DTIAPReport")
@interface DTIAPReport : NSObject
/// 展示购买入口的时候上报
/// @param order 订单
/// @param sku 商品ID
/// @param price 价格， 如 9.99
/// @param usdPrice 美元价格
/// @param currency 货币，如usd
/// @param seq 系列行为标识
/// @param placement 入口，可为空
+ (void)reportEntranceWithOrder:(NSString * _Nonnull)order sku:(NSString * _Nonnull)sku price:(double)price currency:(NSString * _Nonnull)currency seq:(NSString * _Nonnull)seq placement:(NSString * _Nullable)placement;
/// 点击购买的时候上报
/// @param order 订单
/// @param sku 商品ID
/// @param price 价格， 如 9.99
/// @param usdPrice 美元价格
/// @param currency 货币，如usd
/// @param seq 系列行为标识
/// @param placement 入口，可为空
+ (void)reportToPurchaseWithOrder:(NSString * _Nonnull)order sku:(NSString * _Nonnull)sku price:(double)price currency:(NSString * _Nonnull)currency seq:(NSString * _Nonnull)seq placement:(NSString * _Nullable)placement;
/// 购买成功的时候上报，无论是否消耗
/// @param order 订单
/// @param sku 商品ID
/// @param price 价格， 如 9.99
/// @param usdPrice 美元价格
/// @param currency 货币，如usd
/// @param seq 系列行为标识
/// @param placement 入口，可为空
+ (void)reportPurchasedWithOrder:(NSString * _Nonnull)order sku:(NSString * _Nonnull)sku price:(double)price currency:(NSString * _Nonnull)currency seq:(NSString * _Nonnull)seq placement:(NSString * _Nullable)placement;
/// 购买失败的时候上报
/// @param order 订单
/// @param sku 商品ID
/// @param price 价格， 如 9.99
/// @param usdPrice 美元价格
/// @param currency 货币，如usd
/// @param seq 系列行为标识
/// @param code 错误码
/// @param placement 入口，可为空
/// @param msg 额外信息，可为空
+ (void)reportNotToPurchasedWithOrder:(NSString * _Nonnull)order sku:(NSString * _Nonnull)sku price:(double)price currency:(NSString * _Nonnull)currency seq:(NSString * _Nonnull)seq code:(NSString * _Nonnull)code msg:(NSString * _Nullable)msg placement:(NSString * _Nullable)placement;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC12ROIQueryCore11DTIASReport")
@interface DTIASReport : NSObject
/// 展示订阅上报事件
/// \param iasSeq 系列行为唯一标识
///
/// \param iasEntrance 入口，可为空
///
/// \param iasPlacement 页面区分 ，不可为空
///
+ (void)reportToShowWithIasSeq:(NSString * _Nonnull)iasSeq iasEntrance:(NSString * _Nullable)iasEntrance iasPlacement:(NSString * _Nonnull)iasPlacement;
/// 展示订阅内容成功事件
/// \param iasSeq 系列行为唯一标识
///
/// \param iasEntrance 入口，可为空
///
/// \param iasPlacement 页面区分 ，不可为空
///
+ (void)reportShowSuccessWithIasSeq:(NSString * _Nonnull)iasSeq iasEntrance:(NSString * _Nullable)iasEntrance iasPlacement:(NSString * _Nonnull)iasPlacement;
/// 展示订阅内容失败
/// \param iasSeq 系列行为唯一标识
///
/// \param iasEntrance 入口，可为空
///
/// \param iasPlacement 页面区分 ，不可为空
///
/// \param iasCode 错误码
///
/// \param iasMsg 额外信息，可为空
///
+ (void)reportShowFailWithIasSeq:(NSString * _Nonnull)iasSeq iasEntrance:(NSString * _Nullable)iasEntrance iasPlacement:(NSString * _Nonnull)iasPlacement iasCode:(NSString * _Nonnull)iasCode iasMsg:(NSString * _Nullable)iasMsg;
/// 点击内购事件上报
/// \param iasSeq 系列行为唯一标识
///
/// \param iasEntrance 入口，可为空
///
/// \param iasPlacement 页面区分，不可为空
///
/// \param iasSku 订阅的产品ID
///
/// \param iasOrderId 订单ID
///
/// \param iasPrice 价格
///
/// \param iasCurrency 货币
///
+ (void)reportSubscribeWithIasSeq:(NSString * _Nonnull)iasSeq iasEntrance:(NSString * _Nullable)iasEntrance iasPlacement:(NSString * _Nonnull)iasPlacement iasSku:(NSString * _Nonnull)iasSku iasOrderId:(NSString * _Nonnull)iasOrderId iasPrice:(NSString * _Nonnull)iasPrice iasCurrency:(NSString * _Nonnull)iasCurrency;
/// 点击订阅成功事件上报
/// \param iasSeq 系列行为唯一标识
///
/// \param iasEntrance 入口，可为空
///
/// \param iasPlacement 页面区分，不可为空
///
/// \param iasSku 订阅的产品ID
///
/// \param iasOrderId 订单ID
///
/// \param iasPrice 价格
///
/// \param iasCurrency 货币
///
+ (void)reportSubscribeSuccessWithIasSeq:(NSString * _Nonnull)iasSeq iasEntrance:(NSString * _Nullable)iasEntrance iasPlacement:(NSString * _Nonnull)iasPlacement iasSku:(NSString * _Nonnull)iasSku iasOrderId:(NSString * _Nonnull)iasOrderId iasOriginalOrderId:(NSString * _Nonnull)iasOriginalOrderId iasPrice:(NSString * _Nonnull)iasPrice iasCurrency:(NSString * _Nonnull)iasCurrency;
/// 点击订阅失败事件上报
/// \param iasSeq 系列行为唯一标识
///
/// \param iasEntrance 入口，可为空
///
/// \param iasPlacement 页面区分，不可为空
///
/// \param iasSku 订阅的产品ID
///
/// \param iasOrderId 订单ID
///
/// \param iasPrice 价格
///
/// \param iasCurrency 货币
///
/// \param iasCode 错误码
///
/// \param iasMsg 额外信息，可为空
///
+ (void)reportSubscribeFailWithIasSeq:(NSString * _Nonnull)iasSeq iasEntrance:(NSString * _Nullable)iasEntrance iasPlacement:(NSString * _Nonnull)iasPlacement iasSku:(NSString * _Nonnull)iasSku iasOrderId:(NSString * _Nonnull)iasOrderId iasOriginalOrderId:(NSString * _Nonnull)iasOriginalOrderId iasPrice:(NSString * _Nonnull)iasPrice iasCurrency:(NSString * _Nonnull)iasCurrency iasCode:(NSString * _Nonnull)iasCode iasMsg:(NSString * _Nullable)iasMsg;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC12ROIQueryCore4HTTP")
@interface HTTP : NSObject <NSURLSessionDelegate>
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class NSURLSession;
@class NSURLSessionTask;
@class NSURLAuthenticationChallenge;
@class NSURLCredential;
@class NSHTTPURLResponse;
@class NSURLRequest;
@class NSURLSessionDataTask;
@class NSData;

@interface HTTP (SWIFT_EXTENSION(ROIQueryCore)) <NSURLSessionDataDelegate>
- (void)URLSession:(NSURLSession * _Nonnull)session task:(NSURLSessionTask * _Nonnull)task didReceiveChallenge:(NSURLAuthenticationChallenge * _Nonnull)challenge completionHandler:(void (^ _Nonnull)(NSURLSessionAuthChallengeDisposition, NSURLCredential * _Nullable))completionHandler;
- (void)URLSession:(NSURLSession * _Nonnull)session task:(NSURLSessionTask * _Nonnull)task willPerformHTTPRedirection:(NSHTTPURLResponse * _Nonnull)response newRequest:(NSURLRequest * _Nonnull)request completionHandler:(void (^ _Nonnull)(NSURLRequest * _Nullable))completionHandler;
- (void)URLSession:(NSURLSession * _Nonnull)session task:(NSURLSessionTask * _Nonnull)task didSendBodyData:(int64_t)bytesSent totalBytesSent:(int64_t)totalBytesSent totalBytesExpectedToSend:(int64_t)totalBytesExpectedToSend;
- (void)URLSession:(NSURLSession * _Nonnull)session dataTask:(NSURLSessionDataTask * _Nonnull)dataTask didReceiveData:(NSData * _Nonnull)data;
- (void)URLSession:(NSURLSession * _Nonnull)session task:(NSURLSessionTask * _Nonnull)task didCompleteWithError:(NSError * _Nullable)error;
@end


/// The only reason this is not a struct is the requirements for
/// lazy evaluation of <code>headers</code> and <code>cookies</code>, which is mutating the
/// struct. This would make those properties unusable with <code>HTTPResult</code>s
/// declared with <code>let</code>
SWIFT_CLASS("_TtC12ROIQueryCore10HTTPResult")
@interface HTTPResult : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSInteger, Level, closed) {
  LevelTYPE_ERROR = 1,
  LevelTYPE_WARNING = 2,
  LevelTYPE_MESSAGE = 3,
};

/// log等级
typedef SWIFT_ENUM(NSInteger, LogDegree, closed) {
  LogDegreeVerbose = 0,
  LogDegreeDebug = 1,
  LogDegreeNet = 2,
  LogDegreeInfo = 3,
  LogDegreeWarn = 4,
  LogDegreeError = 5,
};

typedef SWIFT_ENUM(NSInteger, Msg, closed) {
  MsgINIT_DB_ERROR = 0,
  MsgINSERT_DB_NORMAL_ERROR = 1,
  MsgINSERT_DB_EXCEPTION = 2,
  MsgINSERT_OLD_DATA_EXCEPTION = 3,
  MsgDELETE_DB_EXCEPTION = 4,
  MsgUPDATE_DB_EXCEPTION = 5,
};




#endif
#if defined(__cplusplus)
#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
