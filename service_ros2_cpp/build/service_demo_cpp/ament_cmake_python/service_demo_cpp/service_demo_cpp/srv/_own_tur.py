# generated from rosidl_generator_py/resource/_idl.py.em
# with input from service_demo_cpp:srv/OwnTur.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_OwnTur_Request(type):
    """Metaclass of message 'OwnTur_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('service_demo_cpp')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'service_demo_cpp.srv.OwnTur_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__own_tur__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__own_tur__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__own_tur__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__own_tur__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__own_tur__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class OwnTur_Request(metaclass=Metaclass_OwnTur_Request):
    """Message class 'OwnTur_Request'."""

    __slots__ = [
        '_l_num',
    ]

    _fields_and_field_types = {
        'l_num': 'int8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.l_num = kwargs.get('l_num', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.l_num != other.l_num:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def l_num(self):
        """Message field 'l_num'."""
        return self._l_num

    @l_num.setter
    def l_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'l_num' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'l_num' field must be an integer in [-128, 127]"
        self._l_num = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_OwnTur_Response(type):
    """Metaclass of message 'OwnTur_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'SUCCESS': 1,
        'FAIL': 0,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('service_demo_cpp')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'service_demo_cpp.srv.OwnTur_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__own_tur__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__own_tur__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__own_tur__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__own_tur__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__own_tur__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'SUCCESS': cls.__constants['SUCCESS'],
            'FAIL': cls.__constants['FAIL'],
        }

    @property
    def SUCCESS(self):
        """Message constant 'SUCCESS'."""
        return Metaclass_OwnTur_Response.__constants['SUCCESS']

    @property
    def FAIL(self):
        """Message constant 'FAIL'."""
        return Metaclass_OwnTur_Response.__constants['FAIL']


class OwnTur_Response(metaclass=Metaclass_OwnTur_Response):
    """
    Message class 'OwnTur_Response'.

    Constants:
      SUCCESS
      FAIL
    """

    __slots__ = [
        '_result',
    ]

    _fields_and_field_types = {
        'result': 'int8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.result = kwargs.get('result', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'result' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'result' field must be an integer in [-128, 127]"
        self._result = value


class Metaclass_OwnTur(type):
    """Metaclass of service 'OwnTur'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('service_demo_cpp')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'service_demo_cpp.srv.OwnTur')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__own_tur

            from service_demo_cpp.srv import _own_tur
            if _own_tur.Metaclass_OwnTur_Request._TYPE_SUPPORT is None:
                _own_tur.Metaclass_OwnTur_Request.__import_type_support__()
            if _own_tur.Metaclass_OwnTur_Response._TYPE_SUPPORT is None:
                _own_tur.Metaclass_OwnTur_Response.__import_type_support__()


class OwnTur(metaclass=Metaclass_OwnTur):
    from service_demo_cpp.srv._own_tur import OwnTur_Request as Request
    from service_demo_cpp.srv._own_tur import OwnTur_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
